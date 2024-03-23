#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HableCurve)
namespace UnityEngine::Rendering {
struct __HableCurve__DirectParams;
}
namespace UnityEngine::Rendering {
class __HableCurve__Segment;
}
namespace UnityEngine::Rendering {
class __HableCurve__Uniforms;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class HableCurve;
}
namespace UnityEngine::Rendering {
class __HableCurve__Segment;
}
namespace UnityEngine::Rendering {
class __HableCurve__Uniforms;
}
namespace UnityEngine::Rendering {
struct __HableCurve__DirectParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::HableCurve);
MARK_REF_PTR_T(::UnityEngine::Rendering::__HableCurve__Segment);
MARK_REF_PTR_T(::UnityEngine::Rendering::__HableCurve__Uniforms);
MARK_VAL_T(::UnityEngine::Rendering::__HableCurve__DirectParams);
// Type: ::Segment
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::HableCurve::Segment*
class CORDL_TYPE __HableCurve__Segment : public ::System::Object {
public:
  // Declarations
  /// @brief Field B, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_B, put = __cordl_internal_set_B)) float_t B;

  /// @brief Field lnA, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lnA, put = __cordl_internal_set_lnA)) float_t lnA;

  /// @brief Field offsetX, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetX, put = __cordl_internal_set_offsetX)) float_t offsetX;

  /// @brief Field offsetY, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetY, put = __cordl_internal_set_offsetY)) float_t offsetY;

  /// @brief Field scaleX, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleX, put = __cordl_internal_set_scaleX)) float_t scaleX;

  /// @brief Field scaleY, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleY, put = __cordl_internal_set_scaleY)) float_t scaleY;

  /// @brief Method Eval, addr 0x17cfa8c, size 0x5c, virtual false, abstract: false, final false
  inline float_t Eval(float_t x);

  static inline ::UnityEngine::Rendering::__HableCurve__Segment* New_ctor();

  constexpr float_t const& __cordl_internal_get_B() const;

  constexpr float_t& __cordl_internal_get_B();

  constexpr float_t const& __cordl_internal_get_lnA() const;

  constexpr float_t& __cordl_internal_get_lnA();

  constexpr float_t const& __cordl_internal_get_offsetX() const;

  constexpr float_t& __cordl_internal_get_offsetX();

  constexpr float_t const& __cordl_internal_get_offsetY() const;

  constexpr float_t& __cordl_internal_get_offsetY();

  constexpr float_t const& __cordl_internal_get_scaleX() const;

  constexpr float_t& __cordl_internal_get_scaleX();

  constexpr float_t const& __cordl_internal_get_scaleY() const;

  constexpr float_t& __cordl_internal_get_scaleY();

  constexpr void __cordl_internal_set_B(float_t value);

  constexpr void __cordl_internal_set_lnA(float_t value);

  constexpr void __cordl_internal_set_offsetX(float_t value);

  constexpr void __cordl_internal_set_offsetY(float_t value);

  constexpr void __cordl_internal_set_scaleX(float_t value);

  constexpr void __cordl_internal_set_scaleY(float_t value);

  /// @brief Method .ctor, addr 0x17cf9ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HableCurve__Segment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HableCurve__Segment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HableCurve__Segment(__HableCurve__Segment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HableCurve__Segment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HableCurve__Segment(__HableCurve__Segment const&) = delete;

  /// @brief Field offsetX, offset: 0x10, size: 0x4, def value: None
  float_t ___offsetX;

  /// @brief Field offsetY, offset: 0x14, size: 0x4, def value: None
  float_t ___offsetY;

  /// @brief Field scaleX, offset: 0x18, size: 0x4, def value: None
  float_t ___scaleX;

  /// @brief Field scaleY, offset: 0x1c, size: 0x4, def value: None
  float_t ___scaleY;

  /// @brief Field lnA, offset: 0x20, size: 0x4, def value: None
  float_t ___lnA;

  /// @brief Field B, offset: 0x24, size: 0x4, def value: None
  float_t ___B;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__HableCurve__Segment, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Segment, ___offsetX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Segment, ___offsetY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Segment, ___scaleX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Segment, ___scaleY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Segment, ___lnA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Segment, ___B) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::DirectParams
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::HableCurve::DirectParams
struct CORDL_TYPE __HableCurve__DirectParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HableCurve__DirectParams();

  // Ctor Parameters [CppParam { name: "x0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "x1", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "y1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "overshootX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "overshootY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gamma", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr __HableCurve__DirectParams(float_t x0, float_t y0, float_t x1, float_t y1, float_t W, float_t overshootX, float_t overshootY, float_t gamma) noexcept;

  /// @brief Field x0, offset: 0x0, size: 0x4, def value: None
  float_t x0;

  /// @brief Field y0, offset: 0x4, size: 0x4, def value: None
  float_t y0;

  /// @brief Field x1, offset: 0x8, size: 0x4, def value: None
  float_t x1;

  /// @brief Field y1, offset: 0xc, size: 0x4, def value: None
  float_t y1;

  /// @brief Field W, offset: 0x10, size: 0x4, def value: None
  float_t W;

  /// @brief Field overshootX, offset: 0x14, size: 0x4, def value: None
  float_t overshootX;

  /// @brief Field overshootY, offset: 0x18, size: 0x4, def value: None
  float_t overshootY;

  /// @brief Field gamma, offset: 0x1c, size: 0x4, def value: None
  float_t gamma;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__HableCurve__DirectParams, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, x0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, y0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, x1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, y1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, W) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, overshootX) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, overshootY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__DirectParams, gamma) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::Uniforms
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::HableCurve::Uniforms*
class CORDL_TYPE __HableCurve__Uniforms : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_curve))::UnityEngine::Vector4 curve;

  __declspec(property(get = get_midSegmentA))::UnityEngine::Vector4 midSegmentA;

  __declspec(property(get = get_midSegmentB))::UnityEngine::Vector4 midSegmentB;

  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent))::UnityEngine::Rendering::HableCurve* parent;

  __declspec(property(get = get_shoSegmentA))::UnityEngine::Vector4 shoSegmentA;

  __declspec(property(get = get_shoSegmentB))::UnityEngine::Vector4 shoSegmentB;

  __declspec(property(get = get_toeSegmentA))::UnityEngine::Vector4 toeSegmentA;

  __declspec(property(get = get_toeSegmentB))::UnityEngine::Vector4 toeSegmentB;

  static inline ::UnityEngine::Rendering::__HableCurve__Uniforms* New_ctor(::UnityEngine::Rendering::HableCurve* parent);

  constexpr ::UnityEngine::Rendering::HableCurve*& __cordl_internal_get_parent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::HableCurve*> const& __cordl_internal_get_parent() const;

  constexpr void __cordl_internal_set_parent(::UnityEngine::Rendering::HableCurve* value);

  /// @brief Method .ctor, addr 0x17cf9b4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::HableCurve* parent);

  /// @brief Method get_curve, addr 0x17cff70, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_curve();

  /// @brief Method get_midSegmentA, addr 0x17d0010, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_midSegmentA();

  /// @brief Method get_midSegmentB, addr 0x17d0050, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_midSegmentB();

  /// @brief Method get_shoSegmentA, addr 0x17d0094, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_shoSegmentA();

  /// @brief Method get_shoSegmentB, addr 0x17d00d4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_shoSegmentB();

  /// @brief Method get_toeSegmentA, addr 0x17cff94, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_toeSegmentA();

  /// @brief Method get_toeSegmentB, addr 0x17cffd0, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_toeSegmentB();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HableCurve__Uniforms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HableCurve__Uniforms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HableCurve__Uniforms(__HableCurve__Uniforms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HableCurve__Uniforms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HableCurve__Uniforms(__HableCurve__Uniforms const&) = delete;

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::HableCurve* ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__HableCurve__Uniforms, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__HableCurve__Uniforms, ___parent) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::HableCurve
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::HableCurve*
class CORDL_TYPE HableCurve : public ::System::Object {
public:
  // Declarations
  using DirectParams = ::UnityEngine::Rendering::__HableCurve__DirectParams;

  using Segment = ::UnityEngine::Rendering::__HableCurve__Segment;

  using Uniforms = ::UnityEngine::Rendering::__HableCurve__Uniforms;

  /// @brief Field <inverseWhitePoint>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__inverseWhitePoint_k__BackingField, put = __cordl_internal_set__inverseWhitePoint_k__BackingField)) float_t _inverseWhitePoint_k__BackingField;

  /// @brief Field <whitePoint>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__whitePoint_k__BackingField, put = __cordl_internal_set__whitePoint_k__BackingField)) float_t _whitePoint_k__BackingField;

  /// @brief Field <x0>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__x0_k__BackingField, put = __cordl_internal_set__x0_k__BackingField)) float_t _x0_k__BackingField;

  /// @brief Field <x1>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__x1_k__BackingField, put = __cordl_internal_set__x1_k__BackingField)) float_t _x1_k__BackingField;

  __declspec(property(get = get_inverseWhitePoint, put = set_inverseWhitePoint)) float_t inverseWhitePoint;

  /// @brief Field segments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_segments,
                      put = __cordl_internal_set_segments))::ArrayW<::UnityEngine::Rendering::__HableCurve__Segment*, ::Array<::UnityEngine::Rendering::__HableCurve__Segment*>*> segments;

  /// @brief Field uniforms, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_uniforms, put = __cordl_internal_set_uniforms))::UnityEngine::Rendering::__HableCurve__Uniforms* uniforms;

  __declspec(property(get = get_whitePoint, put = set_whitePoint)) float_t whitePoint;

  __declspec(property(get = get_x0, put = set_x0)) float_t x0;

  __declspec(property(get = get_x1, put = set_x1)) float_t x1;

  /// @brief Method AsSlopeIntercept, addr 0x17cfebc, size 0x2c, virtual false, abstract: false, final false
  inline void AsSlopeIntercept(ByRef<float_t> m, ByRef<float_t> b, float_t x0, float_t x1, float_t y0, float_t y1);

  /// @brief Method Eval, addr 0x17cf9dc, size 0xb0, virtual false, abstract: false, final false
  inline float_t Eval(float_t x);

  /// @brief Method EvalDerivativeLinearGamma, addr 0x17cfee8, size 0x38, virtual false, abstract: false, final false
  inline float_t EvalDerivativeLinearGamma(float_t m, float_t b, float_t g, float_t x);

  /// @brief Method Init, addr 0x17cfae8, size 0x118, virtual false, abstract: false, final false
  inline void Init(float_t toeStrength, float_t toeLength, float_t shoulderStrength, float_t shoulderLength, float_t shoulderAngle, float_t gamma);

  /// @brief Method InitSegments, addr 0x17cfc00, size 0x2bc, virtual false, abstract: false, final false
  inline void InitSegments(::UnityEngine::Rendering::__HableCurve__DirectParams srcParams);

  static inline ::UnityEngine::Rendering::HableCurve* New_ctor();

  /// @brief Method SolveAB, addr 0x17cff20, size 0x50, virtual false, abstract: false, final false
  inline void SolveAB(ByRef<float_t> lnA, ByRef<float_t> B, float_t x0, float_t y0, float_t m);

  constexpr float_t const& __cordl_internal_get__inverseWhitePoint_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__inverseWhitePoint_k__BackingField();

  constexpr float_t const& __cordl_internal_get__whitePoint_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__whitePoint_k__BackingField();

  constexpr float_t const& __cordl_internal_get__x0_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__x0_k__BackingField();

  constexpr float_t const& __cordl_internal_get__x1_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__x1_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::__HableCurve__Segment*, ::Array<::UnityEngine::Rendering::__HableCurve__Segment*>*> const& __cordl_internal_get_segments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::__HableCurve__Segment*, ::Array<::UnityEngine::Rendering::__HableCurve__Segment*>*>& __cordl_internal_get_segments();

  constexpr ::UnityEngine::Rendering::__HableCurve__Uniforms*& __cordl_internal_get_uniforms();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__HableCurve__Uniforms*> const& __cordl_internal_get_uniforms() const;

  constexpr void __cordl_internal_set__inverseWhitePoint_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__whitePoint_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__x0_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__x1_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_segments(::ArrayW<::UnityEngine::Rendering::__HableCurve__Segment*, ::Array<::UnityEngine::Rendering::__HableCurve__Segment*>*> value);

  constexpr void __cordl_internal_set_uniforms(::UnityEngine::Rendering::__HableCurve__Uniforms* value);

  /// @brief Method .ctor, addr 0x17cf88c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_inverseWhitePoint, addr 0x17cf85c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_inverseWhitePoint();

  /// @brief Method get_whitePoint, addr 0x17cf84c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_whitePoint();

  /// @brief Method get_x0, addr 0x17cf86c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x0();

  /// @brief Method get_x1, addr 0x17cf87c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x1();

  /// @brief Method set_inverseWhitePoint, addr 0x17cf864, size 0x8, virtual false, abstract: false, final false
  inline void set_inverseWhitePoint(float_t value);

  /// @brief Method set_whitePoint, addr 0x17cf854, size 0x8, virtual false, abstract: false, final false
  inline void set_whitePoint(float_t value);

  /// @brief Method set_x0, addr 0x17cf874, size 0x8, virtual false, abstract: false, final false
  inline void set_x0(float_t value);

  /// @brief Method set_x1, addr 0x17cf884, size 0x8, virtual false, abstract: false, final false
  inline void set_x1(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HableCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HableCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HableCurve(HableCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HableCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HableCurve(HableCurve const&) = delete;

  /// @brief Field <whitePoint>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____whitePoint_k__BackingField;

  /// @brief Field <inverseWhitePoint>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t ____inverseWhitePoint_k__BackingField;

  /// @brief Field <x0>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____x0_k__BackingField;

  /// @brief Field <x1>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____x1_k__BackingField;

  /// @brief Field segments, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::__HableCurve__Segment*, ::Array<::UnityEngine::Rendering::__HableCurve__Segment*>*> ___segments;

  /// @brief Field uniforms, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::__HableCurve__Uniforms* ___uniforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HableCurve, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HableCurve, ____whitePoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HableCurve, ____inverseWhitePoint_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HableCurve, ____x0_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HableCurve, ____x1_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HableCurve, ___segments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::HableCurve, ___uniforms) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::HableCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HableCurve*, "UnityEngine.Rendering", "HableCurve");
NEED_NO_BOX(::UnityEngine::Rendering::__HableCurve__Segment);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__HableCurve__Segment*, "UnityEngine.Rendering", "HableCurve/Segment");
NEED_NO_BOX(::UnityEngine::Rendering::__HableCurve__Uniforms);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__HableCurve__Uniforms*, "UnityEngine.Rendering", "HableCurve/Uniforms");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__HableCurve__DirectParams, "UnityEngine.Rendering", "HableCurve/DirectParams");
