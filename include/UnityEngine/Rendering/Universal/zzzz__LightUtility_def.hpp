#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightUtility)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ContourVertex;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ElementType;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class Tess;
}
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine::Rendering::Universal {
struct __Light2D__LightType;
}
namespace UnityEngine::Rendering::Universal {
struct __LightUtility__LightMeshVertex;
}
namespace UnityEngine::Rendering::Universal {
struct __LightUtility__PivotType;
}
namespace UnityEngine::Rendering::Universal {
class __LightUtility____c;
}
namespace UnityEngine::Rendering::Universal {
class __LightUtility____c__DisplayClass6_0;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __LightUtility__PivotType;
}
namespace UnityEngine::Rendering::Universal {
class LightUtility;
}
namespace UnityEngine::Rendering::Universal {
class __LightUtility____c;
}
namespace UnityEngine::Rendering::Universal {
class __LightUtility____c__DisplayClass6_0;
}
namespace UnityEngine::Rendering::Universal {
struct __LightUtility__LightMeshVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightUtility__PivotType);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LightUtility);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__LightUtility____c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex);
// Type: ::PivotType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightUtility::PivotType
struct CORDL_TYPE __LightUtility__PivotType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LightUtility__PivotType_Unwrapped
  enum struct ____LightUtility__PivotType_Unwrapped : int32_t {
    __E_PivotBase = static_cast<int32_t>(0x0),
    __E_PivotCurve = static_cast<int32_t>(0x1),
    __E_PivotIntersect = static_cast<int32_t>(0x2),
    __E_PivotSkip = static_cast<int32_t>(0x3),
    __E_PivotClip = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LightUtility__PivotType_Unwrapped() const noexcept {
    return static_cast<____LightUtility__PivotType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightUtility__PivotType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightUtility__PivotType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PivotBase value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__LightUtility__PivotType const PivotBase;

  /// @brief Field PivotClip value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::__LightUtility__PivotType const PivotClip;

  /// @brief Field PivotCurve value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__LightUtility__PivotType const PivotCurve;

  /// @brief Field PivotIntersect value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__LightUtility__PivotType const PivotIntersect;

  /// @brief Field PivotSkip value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::__LightUtility__PivotType const PivotSkip;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightUtility__PivotType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightUtility__PivotType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::LightMeshVertex
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::LightUtility::LightMeshVertex
struct CORDL_TYPE __LightUtility__LightMeshVertex {
public:
  // Declarations
  /// @brief Field VertexLayout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VertexLayout,
                             put = setStaticF_VertexLayout))::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> VertexLayout;

  static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> getStaticF_VertexLayout();

  static inline void setStaticF_VertexLayout(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightUtility__LightMeshVertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None
  // }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr __LightUtility__LightMeshVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::UnityEngine::Vector2 uv) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field color, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field uv, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, uv) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::LightUtility::<>c__DisplayClass6_0*
class CORDL_TYPE __LightUtility____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::UnityEngine::Color c;

  static inline ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0* New_ctor();

  /// @brief Method <Tessellate>b__1, addr 0x2f37b40, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex _Tessellate_b__1(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex v);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_c() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_c();

  constexpr void __cordl_internal_set_c(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x2f36a60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightUtility____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightUtility____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightUtility____c__DisplayClass6_0(__LightUtility____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightUtility____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightUtility____c__DisplayClass6_0(__LightUtility____c__DisplayClass6_0 const&) = delete;

  /// @brief Field c, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0, ___c) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::LightUtility::<>c*
class CORDL_TYPE __LightUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__LightUtility____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<int32_t, int32_t>* __9__6_0;

  static inline ::UnityEngine::Rendering::Universal::__LightUtility____c* New_ctor();

  /// @brief Method <Tessellate>b__6_0, addr 0x2f37bec, size 0x8, virtual false, abstract: false, final false
  inline int32_t _Tessellate_b__6_0(int32_t i);

  /// @brief Method .ctor, addr 0x2f37be4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__LightUtility____c* getStaticF___9();

  static inline ::System::Func_2<int32_t, int32_t>* getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__LightUtility____c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<int32_t, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightUtility____c(__LightUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightUtility____c(__LightUtility____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__LightUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::LightUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::LightUtility*
class CORDL_TYPE LightUtility : public ::System::Object {
public:
  // Declarations
  using LightMeshVertex = ::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex;

  using PivotType = ::UnityEngine::Rendering::Universal::__LightUtility__PivotType;

  using __c = ::UnityEngine::Rendering::Universal::__LightUtility____c;

  using __c__DisplayClass6_0 = ::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0;

  /// @brief Method CheckForChange, addr 0x2f33874, size 0x18, virtual false, abstract: false, final false
  static inline bool CheckForChange(::UnityEngine::Rendering::Universal::__Light2D__LightType a, ByRef<::UnityEngine::Rendering::Universal::__Light2D__LightType> b);

  /// @brief Method CheckForChange, addr 0x2f362c0, size 0x18, virtual false, abstract: false, final false
  static inline bool CheckForChange(bool a, ByRef<bool> b);

  /// @brief Method CheckForChange, addr 0x2f33844, size 0x18, virtual false, abstract: false, final false
  static inline bool CheckForChange(float_t a, ByRef<float_t> b);

  /// @brief Method CheckForChange, addr 0x2f3385c, size 0x18, virtual false, abstract: false, final false
  static inline bool CheckForChange(int32_t a, ByRef<int32_t> b);

  /// @brief Method DegeneratePivots, addr 0x2f36b3c, size 0x3dc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
  DegeneratePivots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path,
                   ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* inPath);

  /// @brief Method FixPivots, addr 0x2f37130, size 0x300, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
  FixPivots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* outPath,
            ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* inPath);

  /// @brief Method GenerateParametricMesh, addr 0x2f34298, size 0x7bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GenerateParametricMesh(::UnityEngine::Rendering::Universal::Light2D* light, float_t radius, float_t falloffDistance, float_t angle, int32_t sides);

  /// @brief Method GenerateShapeMesh, addr 0x2f3388c, size 0xa0c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GenerateShapeMesh(::UnityEngine::Rendering::Universal::Light2D* light, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath,
                                                        float_t falloffDistance);

  /// @brief Method GenerateSpriteMesh, addr 0x2f332d0, size 0x488, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GenerateSpriteMesh(::UnityEngine::Rendering::Universal::Light2D* light, ::UnityEngine::Sprite* sprite);

  /// @brief Method GetOutlinePath, addr 0x2f37430, size 0x410, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetOutlinePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath, float_t offsetDistance);

  /// @brief Method GetShapePathHash, addr 0x2f33758, size 0xec, virtual false, abstract: false, final false
  static inline int32_t GetShapePathHash(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> path);

  /// @brief Method SortPivots, addr 0x2f36f18, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
  SortPivots(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* outPath,
             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* inPath);

  /// @brief Method Tessellate, addr 0x2f362d8, size 0x788, virtual false, abstract: false, final false
  static inline void Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess* tess, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType boundaryType,
                                ::Unity::Collections::NativeArray_1<uint16_t> indices,
                                ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex> vertices, ::UnityEngine::Color c, ByRef<int32_t> VCount,
                                ByRef<int32_t> ICount);

  /// @brief Method TestPivot, addr 0x2f36a68, size 0xd4, virtual false, abstract: false, final false
  static inline bool TestPivot(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, int32_t activePoint, int64_t lastPoint);

  /// @brief Method TransferToMesh, addr 0x2f37840, size 0x1e8, virtual false, abstract: false, final false
  static inline void TransferToMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex> vertices, int32_t vertexCount,
                                    ::Unity::Collections::NativeArray_1<uint16_t> indices, int32_t indexCount, ::UnityEngine::Rendering::Universal::Light2D* light);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightUtility(LightUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightUtility(LightUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightUtility__PivotType, "UnityEngine.Rendering.Universal", "LightUtility/PivotType");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightUtility*, "UnityEngine.Rendering.Universal", "LightUtility");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__LightUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightUtility____c*, "UnityEngine.Rendering.Universal", "LightUtility/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightUtility____c__DisplayClass6_0*, "UnityEngine.Rendering.Universal", "LightUtility/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__LightUtility__LightMeshVertex, "UnityEngine.Rendering.Universal", "LightUtility/LightMeshVertex");
