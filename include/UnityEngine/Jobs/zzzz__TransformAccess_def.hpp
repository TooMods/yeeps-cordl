#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAccess)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Jobs::TransformAccess);
// Type: UnityEngine.Jobs::TransformAccess
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Jobs {
// Is value type: true
// CS Name: ::UnityEngine.Jobs::TransformAccess
struct CORDL_TYPE TransformAccess {
public:
  // Declarations
  __declspec(property(get = get_localScale))::UnityEngine::Vector3 localScale;

  __declspec(property(get = get_localToWorldMatrix))::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Method GetLocalScale, addr 0x2a88244, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalScale(ByRef<::UnityEngine::Jobs::TransformAccess> access, ByRef<::UnityEngine::Vector3> r);

  /// @brief Method GetLocalToWorldMatrix, addr 0x2a882f4, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalToWorldMatrix(ByRef<::UnityEngine::Jobs::TransformAccess> access, ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method GetPosition, addr 0x2a88108, size 0x44, virtual false, abstract: false, final false
  static inline void GetPosition(ByRef<::UnityEngine::Jobs::TransformAccess> access, ByRef<::UnityEngine::Vector3> p);

  /// @brief Method GetRotation, addr 0x2a881a4, size 0x44, virtual false, abstract: false, final false
  static inline void GetRotation(ByRef<::UnityEngine::Jobs::TransformAccess> access, ByRef<::UnityEngine::Quaternion> r);

  /// @brief Method get_localScale, addr 0x2a881e8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localToWorldMatrix, addr 0x2a88288, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_position, addr 0x2a880ac, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x2a8814c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformAccess();

  // Ctor Parameters [CppParam { name: "hierarchy", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransformAccess(void* hierarchy, int32_t index) noexcept;

  /// @brief Field hierarchy, offset: 0x0, size: 0x8, def value: None
  void* hierarchy;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Jobs::TransformAccess, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Jobs::TransformAccess, hierarchy) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Jobs::TransformAccess, index) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::TransformAccess, "UnityEngine.Jobs", "TransformAccess");
