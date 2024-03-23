#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendOp)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BlendOp;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BlendOp);
// Type: UnityEngine.Rendering::BlendOp
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BlendOp
struct CORDL_TYPE BlendOp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BlendOp_Unwrapped
  enum struct __BlendOp_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_Subtract = static_cast<int32_t>(0x1),
    __E_ReverseSubtract = static_cast<int32_t>(0x2),
    __E_Min = static_cast<int32_t>(0x3),
    __E_Max = static_cast<int32_t>(0x4),
    __E_LogicalClear = static_cast<int32_t>(0x5),
    __E_LogicalSet = static_cast<int32_t>(0x6),
    __E_LogicalCopy = static_cast<int32_t>(0x7),
    __E_LogicalCopyInverted = static_cast<int32_t>(0x8),
    __E_LogicalNoop = static_cast<int32_t>(0x9),
    __E_LogicalInvert = static_cast<int32_t>(0xa),
    __E_LogicalAnd = static_cast<int32_t>(0xb),
    __E_LogicalNand = static_cast<int32_t>(0xc),
    __E_LogicalOr = static_cast<int32_t>(0xd),
    __E_LogicalNor = static_cast<int32_t>(0xe),
    __E_LogicalXor = static_cast<int32_t>(0xf),
    __E_LogicalEquivalence = static_cast<int32_t>(0x10),
    __E_LogicalAndReverse = static_cast<int32_t>(0x11),
    __E_LogicalAndInverted = static_cast<int32_t>(0x12),
    __E_LogicalOrReverse = static_cast<int32_t>(0x13),
    __E_LogicalOrInverted = static_cast<int32_t>(0x14),
    __E_Multiply = static_cast<int32_t>(0x15),
    __E_Screen = static_cast<int32_t>(0x16),
    __E_Overlay = static_cast<int32_t>(0x17),
    __E_Darken = static_cast<int32_t>(0x18),
    __E_Lighten = static_cast<int32_t>(0x19),
    __E_ColorDodge = static_cast<int32_t>(0x1a),
    __E_ColorBurn = static_cast<int32_t>(0x1b),
    __E_HardLight = static_cast<int32_t>(0x1c),
    __E_SoftLight = static_cast<int32_t>(0x1d),
    __E_Difference = static_cast<int32_t>(0x1e),
    __E_Exclusion = static_cast<int32_t>(0x1f),
    __E_HSLHue = static_cast<int32_t>(0x20),
    __E_HSLSaturation = static_cast<int32_t>(0x21),
    __E_HSLColor = static_cast<int32_t>(0x22),
    __E_HSLLuminosity = static_cast<int32_t>(0x23),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BlendOp_Unwrapped() const noexcept {
    return static_cast<__BlendOp_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendOp();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BlendOp(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Add value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::BlendOp const Add;

  /// @brief Field ColorBurn value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::Rendering::BlendOp const ColorBurn;

  /// @brief Field ColorDodge value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::Rendering::BlendOp const ColorDodge;

  /// @brief Field Darken value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Rendering::BlendOp const Darken;

  /// @brief Field Difference value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::Rendering::BlendOp const Difference;

  /// @brief Field Exclusion value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::Rendering::BlendOp const Exclusion;

  /// @brief Field HSLColor value: static_cast<int32_t>(0x22)
  static ::UnityEngine::Rendering::BlendOp const HSLColor;

  /// @brief Field HSLHue value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::BlendOp const HSLHue;

  /// @brief Field HSLLuminosity value: static_cast<int32_t>(0x23)
  static ::UnityEngine::Rendering::BlendOp const HSLLuminosity;

  /// @brief Field HSLSaturation value: static_cast<int32_t>(0x21)
  static ::UnityEngine::Rendering::BlendOp const HSLSaturation;

  /// @brief Field HardLight value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::Rendering::BlendOp const HardLight;

  /// @brief Field Lighten value: static_cast<int32_t>(0x19)
  static ::UnityEngine::Rendering::BlendOp const Lighten;

  /// @brief Field LogicalAnd value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::BlendOp const LogicalAnd;

  /// @brief Field LogicalAndInverted value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Rendering::BlendOp const LogicalAndInverted;

  /// @brief Field LogicalAndReverse value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Rendering::BlendOp const LogicalAndReverse;

  /// @brief Field LogicalClear value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::BlendOp const LogicalClear;

  /// @brief Field LogicalCopy value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::BlendOp const LogicalCopy;

  /// @brief Field LogicalCopyInverted value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::BlendOp const LogicalCopyInverted;

  /// @brief Field LogicalEquivalence value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::BlendOp const LogicalEquivalence;

  /// @brief Field LogicalInvert value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::BlendOp const LogicalInvert;

  /// @brief Field LogicalNand value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::BlendOp const LogicalNand;

  /// @brief Field LogicalNoop value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::BlendOp const LogicalNoop;

  /// @brief Field LogicalNor value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Rendering::BlendOp const LogicalNor;

  /// @brief Field LogicalOr value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::BlendOp const LogicalOr;

  /// @brief Field LogicalOrInverted value: static_cast<int32_t>(0x14)
  static ::UnityEngine::Rendering::BlendOp const LogicalOrInverted;

  /// @brief Field LogicalOrReverse value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Rendering::BlendOp const LogicalOrReverse;

  /// @brief Field LogicalSet value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::BlendOp const LogicalSet;

  /// @brief Field LogicalXor value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Rendering::BlendOp const LogicalXor;

  /// @brief Field Max value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::BlendOp const Max;

  /// @brief Field Min value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::BlendOp const Min;

  /// @brief Field Multiply value: static_cast<int32_t>(0x15)
  static ::UnityEngine::Rendering::BlendOp const Multiply;

  /// @brief Field Overlay value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Rendering::BlendOp const Overlay;

  /// @brief Field ReverseSubtract value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::BlendOp const ReverseSubtract;

  /// @brief Field Screen value: static_cast<int32_t>(0x16)
  static ::UnityEngine::Rendering::BlendOp const Screen;

  /// @brief Field SoftLight value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::Rendering::BlendOp const SoftLight;

  /// @brief Field Subtract value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::BlendOp const Subtract;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BlendOp, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendOp, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BlendOp, "UnityEngine.Rendering", "BlendOp");
