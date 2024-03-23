#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BoundsUtils)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class BoundsUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::BoundsUtils);
// Type: Unity.XR.CoreUtils::BoundsUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::BoundsUtils*
class CORDL_TYPE BoundsUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_Renderers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Renderers, put = setStaticF_k_Renderers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* k_Renderers;

  /// @brief Field k_Transforms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Transforms, put = setStaticF_k_Transforms))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* k_Transforms;

  /// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<T>* colliders);

  /// @brief Method GetBounds, addr 0x28728a0, size 0x2d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* gameObjects);

  /// @brief Method GetBounds, addr 0x2873374, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points);

  /// @brief Method GetBounds, addr 0x287305c, size 0x318, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* renderers);

  /// @brief Method GetBounds, addr 0x2872b70, size 0x358, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::UnityEngine::Transform* transform);

  /// @brief Method GetBounds, addr 0x2872ec8, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* getStaticF_k_Renderers();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_k_Transforms();

  static inline void setStaticF_k_Renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value);

  static inline void setStaticF_k_Transforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsUtils(BoundsUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsUtils(BoundsUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::BoundsUtils, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::BoundsUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::BoundsUtils*, "Unity.XR.CoreUtils", "BoundsUtils");
