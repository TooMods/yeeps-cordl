#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ARTrackablesParentTransformChangedEventArgs)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
struct ARTrackablesParentTransformChangedEventArgs;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs);
// Type: Unity.XR.CoreUtils::ARTrackablesParentTransformChangedEventArgs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: true
// CS Name: ::Unity.XR.CoreUtils::ARTrackablesParentTransformChangedEventArgs
struct CORDL_TYPE ARTrackablesParentTransformChangedEventArgs {
public:
  // Declarations
  __declspec(property(get = get_Origin))::UnityW<::Unity::XR::CoreUtils::XROrigin> Origin;

  __declspec(property(get = get_TrackablesParent))::UnityW<::UnityEngine::Transform> TrackablesParent;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>"
  constexpr operator ::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*();

  /// @brief Method Equals, addr 0x2872718, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x287266c, size 0xac, virtual true, abstract: false, final true
  inline bool Equals(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs other);

  /// @brief Method GetHashCode, addr 0x2872790, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2872560, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::XROrigin* origin, ::UnityEngine::Transform* trackablesParent);

  /// @brief Method get_Origin, addr 0x2872550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> get_Origin();

  /// @brief Method get_TrackablesParent, addr 0x2872558, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_TrackablesParent();

  /// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>"
  constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*
  i___System__IEquatable_1___Unity__XR__CoreUtils__ARTrackablesParentTransformChangedEventArgs_();

  /// @brief Method op_Equality, addr 0x287280c, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs lhs, ::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs rhs);

  /// @brief Method op_Inequality, addr 0x2872838, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs lhs, ::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ARTrackablesParentTransformChangedEventArgs();

  // Ctor Parameters [CppParam { name: "_Origin_k__BackingField", ty: "::UnityW<::Unity::XR::CoreUtils::XROrigin>", modifiers: "", def_value: None }, CppParam { name:
  // "_TrackablesParent_k__BackingField", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }]
  constexpr ARTrackablesParentTransformChangedEventArgs(::UnityW<::Unity::XR::CoreUtils::XROrigin> _Origin_k__BackingField,
                                                        ::UnityW<::UnityEngine::Transform> _TrackablesParent_k__BackingField) noexcept;

  /// @brief Field <Origin>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::Unity::XR::CoreUtils::XROrigin> _Origin_k__BackingField;

  /// @brief Field <TrackablesParent>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _TrackablesParent_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, _Origin_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, _TrackablesParent_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs, "Unity.XR.CoreUtils", "ARTrackablesParentTransformChangedEventArgs");
