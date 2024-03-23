#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtility)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class MathUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::MathUtility);
// Type: Unity.XR.CoreUtils::MathUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::MathUtility*
class CORDL_TYPE MathUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field EpsilonScaled, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_EpsilonScaled, put = setStaticF_EpsilonScaled)) float_t EpsilonScaled;

  /// @brief Method Approximately, addr 0x287d1cc, size 0x80, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b);

  /// @brief Method ApproximatelyZero, addr 0x287d24c, size 0x78, virtual false, abstract: false, final false
  static inline bool ApproximatelyZero(float_t a);

  /// @brief Method Clamp, addr 0x287d2c4, size 0x1c, virtual false, abstract: false, final false
  static inline double_t Clamp(double_t input, double_t min, double_t max);

  /// @brief Method FirstActiveFlagIndex, addr 0x287d66c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t FirstActiveFlagIndex(int32_t value);

  /// @brief Method IsAxisAligned, addr 0x287d4d4, size 0x17c, virtual false, abstract: false, final false
  static inline bool IsAxisAligned(::UnityEngine::Vector3 v);

  /// @brief Method IsPositivePowerOfTwo, addr 0x287d650, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsPositivePowerOfTwo(int32_t value);

  /// @brief Method IsUndefined, addr 0x287d424, size 0xb0, virtual false, abstract: false, final false
  static inline bool IsUndefined(float_t value);

  /// @brief Method ShortestAngleDistance, addr 0x287d2e0, size 0xa4, virtual false, abstract: false, final false
  static inline double_t ShortestAngleDistance(double_t start, double_t end, double_t halfMax, double_t max);

  /// @brief Method ShortestAngleDistance, addr 0x287d384, size 0xa0, virtual false, abstract: false, final false
  static inline float_t ShortestAngleDistance(float_t start, float_t end, float_t halfMax, float_t max);

  static inline float_t getStaticF_EpsilonScaled();

  static inline void setStaticF_EpsilonScaled(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MathUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MathUtility(MathUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MathUtility(MathUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::MathUtility, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::MathUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::MathUtility*, "Unity.XR.CoreUtils", "MathUtility");
