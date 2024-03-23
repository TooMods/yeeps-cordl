#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vec3)
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct Vec3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3);
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::Vec3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::Vec3
struct CORDL_TYPE Vec3 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Field Zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 Zero;

  /// @brief Method Dot, addr 0x28927ec, size 0x2c, virtual false, abstract: false, final false
  static inline void Dot(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> u, ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> v, ByRef<float_t> dot);

  /// @brief Method LongAxis, addr 0x28928b4, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t LongAxis(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> v);

  /// @brief Method Neg, addr 0x28927d0, size 0x1c, virtual false, abstract: false, final false
  static inline void Neg(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> v);

  /// @brief Method Normalize, addr 0x2892818, size 0x9c, virtual false, abstract: false, final false
  static inline void Normalize(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> v);

  /// @brief Method Sub, addr 0x28927ac, size 0x24, virtual false, abstract: false, final false
  static inline void Sub(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> lhs, ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> rhs,
                         ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> result);

  /// @brief Method ToString, addr 0x2892974, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 getStaticF_Zero();

  /// @brief Method get_Item, addr 0x28926d4, size 0x6c, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  static inline void setStaticF_Zero(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value);

  /// @brief Method set_Item, addr 0x2892740, size 0x6c, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vec3();

  // Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr Vec3(float_t X, float_t Y, float_t Z) noexcept;

  /// @brief Field X, offset: 0x0, size: 0x4, def value: None
  float_t X;

  /// @brief Field Y, offset: 0x4, size: 0x4, def value: None
  float_t Y;

  /// @brief Field Z, offset: 0x8, size: 0x4, def value: None
  float_t Z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, Y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, Z) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, "UnityEngine.Rendering.Universal.LibTessDotNet", "Vec3");
