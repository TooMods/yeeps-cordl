#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisibleReflectionProbe)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VisibleReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VisibleReflectionProbe);
// Type: UnityEngine.Rendering::VisibleReflectionProbe
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 152, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::VisibleReflectionProbe
struct CORDL_TYPE VisibleReflectionProbe {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>*();

  /// @brief Method Equals, addr 0x2a95124, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a94e90, size 0x294, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::VisibleReflectionProbe other);

  /// @brief Method GetHashCode, addr 0x2a951b4, size 0x2d0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>* i___System__IEquatable_1___UnityEngine__Rendering__VisibleReflectionProbe_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisibleReflectionProbe();

  // Ctor Parameters [CppParam { name: "m_Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "m_LocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers:
  // "", def_value: None }, CppParam { name: "m_HdrData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_BlendDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Importance", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_BoxProjection", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TextureId", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr VisibleReflectionProbe(::UnityEngine::Bounds m_Bounds, ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix, ::UnityEngine::Vector4 m_HdrData, ::UnityEngine::Vector3 m_Center,
                                   float_t m_BlendDistance, int32_t m_Importance, int32_t m_BoxProjection, int32_t m_InstanceId, int32_t m_TextureId) noexcept;

  /// @brief Field m_Bounds, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Bounds m_Bounds;

  /// @brief Field m_LocalToWorldMatrix, offset: 0x18, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix;

  /// @brief Field m_HdrData, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Vector4 m_HdrData;

  /// @brief Field m_Center, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Center;

  /// @brief Field m_BlendDistance, offset: 0x74, size: 0x4, def value: None
  float_t m_BlendDistance;

  /// @brief Field m_Importance, offset: 0x78, size: 0x4, def value: None
  int32_t m_Importance;

  /// @brief Field m_BoxProjection, offset: 0x7c, size: 0x4, def value: None
  int32_t m_BoxProjection;

  /// @brief Field m_InstanceId, offset: 0x80, size: 0x4, def value: None
  int32_t m_InstanceId;

  /// @brief Field m_TextureId, offset: 0x84, size: 0x4, def value: None
  int32_t m_TextureId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VisibleReflectionProbe, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_Bounds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_LocalToWorldMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_HdrData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_Center) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_BlendDistance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_Importance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_BoxProjection) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_InstanceId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleReflectionProbe, m_TextureId) == 0x84, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VisibleReflectionProbe, "UnityEngine.Rendering", "VisibleReflectionProbe");
