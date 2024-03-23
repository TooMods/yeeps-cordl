#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryUtils)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class GeometryUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GeometryUtils);
// Type: Unity.XR.CoreUtils::GeometryUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::GeometryUtils*
class CORDL_TYPE GeometryUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_Forward, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_k_Forward, put = setStaticF_k_Forward))::UnityEngine::Vector3 k_Forward;

  /// @brief Field k_HullEdgeDirections, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HullEdgeDirections, put = setStaticF_k_HullEdgeDirections))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* k_HullEdgeDirections;

  /// @brief Field k_HullIndices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_HullIndices, put = setStaticF_k_HullIndices))::System::Collections::Generic::HashSet_1<int32_t>* k_HullIndices;

  /// @brief Field k_Up, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_k_Up, put = setStaticF_k_Up))::UnityEngine::Vector3 k_Up;

  /// @brief Field k_VerticalCorrection, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_VerticalCorrection, put = setStaticF_k_VerticalCorrection))::UnityEngine::Quaternion k_VerticalCorrection;

  /// @brief Field k_Zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_k_Zero, put = setStaticF_k_Zero))::UnityEngine::Vector3 k_Zero;

  /// @brief Method ClosestPointOnLineSegment, addr 0x28787ac, size 0x1e0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClosestPointOnLineSegment(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method ClosestPointsOnTwoLineSegments, addr 0x28794d8, size 0xa3c, virtual false, abstract: false, final false
  static inline bool ClosestPointsOnTwoLineSegments(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 aLineVector, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 bLineVector,
                                                    ByRef<::UnityEngine::Vector3> resultA, ByRef<::UnityEngine::Vector3> resultB, double_t parallelTest);

  /// @brief Method ClosestPolygonApproach, addr 0x2879f14, size 0x33c, virtual false, abstract: false, final false
  static inline void ClosestPolygonApproach(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verticesA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verticesB,
                                            ByRef<::UnityEngine::Vector3> pointA, ByRef<::UnityEngine::Vector3> pointB, float_t parallelTest);

  /// @brief Method ClosestTimesOnTwoLines, addr 0x2878ed0, size 0x1a8, virtual false, abstract: false, final false
  static inline bool ClosestTimesOnTwoLines(::UnityEngine::Vector3 positionA, ::UnityEngine::Vector3 velocityA, ::UnityEngine::Vector3 positionB, ::UnityEngine::Vector3 velocityB, ByRef<float_t> s,
                                            ByRef<float_t> t, double_t parallelTest);

  /// @brief Method ClosestTimesOnTwoLinesXZ, addr 0x2879370, size 0x168, virtual false, abstract: false, final false
  static inline bool ClosestTimesOnTwoLinesXZ(::UnityEngine::Vector3 positionA, ::UnityEngine::Vector3 velocityA, ::UnityEngine::Vector3 positionB, ::UnityEngine::Vector3 velocityB, ByRef<float_t> s,
                                              ByRef<float_t> t, double_t parallelTest);

  /// @brief Method ConvexHull2D, addr 0x287a9fc, size 0x46c, virtual false, abstract: false, final false
  static inline bool ConvexHull2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* hull);

  /// @brief Method ConvexPolygonArea, addr 0x287be88, size 0x12c, virtual false, abstract: false, final false
  static inline float_t ConvexPolygonArea(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method FindClosestEdge, addr 0x2878544, size 0x268, virtual false, abstract: false, final false
  static inline bool FindClosestEdge(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::UnityEngine::Vector3 point, ByRef<::UnityEngine::Vector3> vertexA,
                                     ByRef<::UnityEngine::Vector3> vertexB);

  /// @brief Method NormalizeRotationKeepingUp, addr 0x287c5b4, size 0x200, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion NormalizeRotationKeepingUp(::UnityEngine::Quaternion rot);

  /// @brief Method OrientedMinimumBoundingBox2D, addr 0x287afec, size 0x984, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 OrientedMinimumBoundingBox2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* convexHull,
                                                                    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> boundingBox);

  /// @brief Method PointInPolygon, addr 0x287a250, size 0x3cc, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::UnityEngine::Vector3 testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method PointInPolygon3D, addr 0x287a61c, size 0x1dc, virtual false, abstract: false, final false
  static inline bool PointInPolygon3D(::UnityEngine::Vector3 testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method PointOnLineSegmentXZ, addr 0x287c53c, size 0x78, virtual false, abstract: false, final false
  static inline bool PointOnLineSegmentXZ(::UnityEngine::Vector3 testPoint, ::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, float_t epsilon);

  /// @brief Method PointOnOppositeSideOfPolygon, addr 0x287898c, size 0x544, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PointOnOppositeSideOfPolygon(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::UnityEngine::Vector3 point);

  /// @brief Method PointOnPolygonBoundsXZ, addr 0x287c304, size 0x238, virtual false, abstract: false, final false
  static inline bool PointOnPolygonBoundsXZ(::UnityEngine::Vector3 testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, float_t epsilon);

  /// @brief Method PolygonCentroid2D, addr 0x287ae68, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PolygonCentroid2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method PolygonInPolygon, addr 0x287bfb4, size 0x1c8, virtual false, abstract: false, final false
  static inline bool PolygonInPolygon(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* polygonB);

  /// @brief Method PolygonUVPoseFromPlanePose, addr 0x287c7b4, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose PolygonUVPoseFromPlanePose(::UnityEngine::Pose pose);

  /// @brief Method PolygonVertexToUV, addr 0x287c87c, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PolygonVertexToUV(::UnityEngine::Vector3 vertexPos, ::UnityEngine::Pose planePose, ::UnityEngine::Pose uvPose);

  /// @brief Method PolygonsWithinRange, addr 0x287c17c, size 0x74, virtual false, abstract: false, final false
  static inline bool PolygonsWithinRange(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* polygonB,
                                         float_t maxDistance);

  /// @brief Method PolygonsWithinSqRange, addr 0x287c1f0, size 0x114, virtual false, abstract: false, final false
  static inline bool PolygonsWithinSqRange(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* polygonB,
                                           float_t maxSqDistance);

  /// @brief Method ProjectPointOnPlane, addr 0x287a7f8, size 0x204, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectPointOnPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 point);

  /// @brief Method RotateCalipers, addr 0x287b970, size 0x47c, virtual false, abstract: false, final false
  static inline void RotateCalipers(::UnityEngine::Vector3 alignEdge, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ByRef<int32_t> indexA, ByRef<int32_t> indexB,
                                    ByRef<int32_t> indexC, ByRef<int32_t> indexD, ByRef<::UnityEngine::Vector3> caliperA, ByRef<::UnityEngine::Vector3> caliperB,
                                    ByRef<::UnityEngine::Vector3> caliperC, ByRef<::UnityEngine::Vector3> caliperD, ByRef<::UnityEngine::Vector3> caliperAEndCorner,
                                    ByRef<::UnityEngine::Vector3> caliperBEndCorner, ByRef<::UnityEngine::Vector3> caliperCEndCorner, ByRef<::UnityEngine::Vector3> caliperDEndCorner);

  /// @brief Method RotationForBox, addr 0x287bdec, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion RotationForBox(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices);

  /// @brief Method TriangulatePolygon, addr 0x2879078, size 0x2f8, virtual false, abstract: false, final false
  static inline void TriangulatePolygon(::System::Collections::Generic::List_1<int32_t>* indices, int32_t vertCount, bool reverse);

  static inline ::UnityEngine::Vector3 getStaticF_k_Forward();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_k_HullEdgeDirections();

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_HullIndices();

  static inline ::UnityEngine::Vector3 getStaticF_k_Up();

  static inline ::UnityEngine::Quaternion getStaticF_k_VerticalCorrection();

  static inline ::UnityEngine::Vector3 getStaticF_k_Zero();

  static inline void setStaticF_k_Forward(::UnityEngine::Vector3 value);

  static inline void setStaticF_k_HullEdgeDirections(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  static inline void setStaticF_k_HullIndices(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline void setStaticF_k_Up(::UnityEngine::Vector3 value);

  static inline void setStaticF_k_VerticalCorrection(::UnityEngine::Quaternion value);

  static inline void setStaticF_k_Zero(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryUtils(GeometryUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryUtils(GeometryUtils const&) = delete;

  /// @brief Field k_MostlyVertical offset 0xffffffff size 0x4
  static constexpr float_t k_MostlyVertical{ 0.95 };

  /// @brief Field k_TwoPi offset 0xffffffff size 0x4
  static constexpr float_t k_TwoPi{ 6.2831855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GeometryUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::GeometryUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GeometryUtils*, "Unity.XR.CoreUtils", "GeometryUtils");
