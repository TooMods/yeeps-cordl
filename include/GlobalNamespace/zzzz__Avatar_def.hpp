#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AvatarHand_def.hpp"
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Avatar)
namespace GlobalNamespace {
class AvatarHand;
}
namespace GlobalNamespace {
class AvatarIdentity;
}
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
class CosmeticsDisplay;
}
namespace GlobalNamespace {
struct __AvatarHand__Pose;
}
namespace GlobalNamespace {
struct __Avatar__AvatarPortion;
}
namespace GlobalNamespace {
class __Avatar__OnVisualLayerUpdated;
}
namespace GlobalNamespace {
struct __Avatar__Pose;
}
namespace GlobalNamespace {
class __Avatar___ZipperOpenRoutine_d__87;
}
namespace GlobalNamespace {
struct __Item__AnchorState;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __Avatar__AvatarPortion;
}
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class __Avatar__OnVisualLayerUpdated;
}
namespace GlobalNamespace {
class __Avatar___ZipperOpenRoutine_d__87;
}
namespace GlobalNamespace {
struct __Avatar__Pose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Avatar__AvatarPortion);
MARK_REF_PTR_T(::GlobalNamespace::Avatar);
MARK_REF_PTR_T(::GlobalNamespace::__Avatar__OnVisualLayerUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87);
MARK_VAL_T(::GlobalNamespace::__Avatar__Pose);
// Type: ::AvatarPortion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Avatar::AvatarPortion
struct CORDL_TYPE __Avatar__AvatarPortion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Avatar__AvatarPortion_Unwrapped
  enum struct ____Avatar__AvatarPortion_Unwrapped : int32_t {
    __E_all = static_cast<int32_t>(0x0),
    __E_headOnly = static_cast<int32_t>(0x1),
    __E_bodyOnly = static_cast<int32_t>(0x2),
    __E_bodyOnlyNoArms = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Avatar__AvatarPortion_Unwrapped() const noexcept {
    return static_cast<____Avatar__AvatarPortion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Avatar__AvatarPortion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Avatar__AvatarPortion(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field all value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Avatar__AvatarPortion const all;

  /// @brief Field bodyOnly value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Avatar__AvatarPortion const bodyOnly;

  /// @brief Field bodyOnlyNoArms value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Avatar__AvatarPortion const bodyOnlyNoArms;

  /// @brief Field headOnly value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Avatar__AvatarPortion const headOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Avatar__AvatarPortion, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar__AvatarPortion, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pose
// SizeInfo { instance_size: 108, native_size: 108, calculated_instance_size: 108, calculated_native_size: 124, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Avatar::Pose
struct CORDL_TYPE __Avatar__Pose {
public:
  // Declarations
  /// @brief Field leftHandPoleOffset, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_leftHandPoleOffset, put = setStaticF_leftHandPoleOffset))::UnityEngine::Vector3 leftHandPoleOffset;

  /// @brief Field rightHandPoleOffset, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_rightHandPoleOffset, put = setStaticF_rightHandPoleOffset))::UnityEngine::Vector3 rightHandPoleOffset;

  /// @brief Method GetLeftPolePosition, addr 0x1589a0c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLeftPolePosition();

  /// @brief Method GetRightPolePosition, addr 0x15899c8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRightPolePosition();

  /// @brief Method LerpUnclamped, addr 0x1589a50, size 0x204, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Avatar__Pose LerpUnclamped(::GlobalNamespace::__Avatar__Pose a, ::GlobalNamespace::__Avatar__Pose b, float_t p);

  /// @brief Method .ctor, addr 0x158998c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 headPosition, ::UnityEngine::Quaternion headRotation, ::GlobalNamespace::__AvatarHand__Pose rightHandPose,
                    ::GlobalNamespace::__AvatarHand__Pose leftHandPose);

  static inline ::UnityEngine::Vector3 getStaticF_leftHandPoleOffset();

  static inline ::UnityEngine::Vector3 getStaticF_rightHandPoleOffset();

  static inline void setStaticF_leftHandPoleOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_rightHandPoleOffset(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Avatar__Pose();

  // Ctor Parameters [CppParam { name: "headPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headRotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "rightHandPose", ty: "::GlobalNamespace::__AvatarHand__Pose", modifiers: "", def_value: None }, CppParam { name: "leftHandPose", ty:
  // "::GlobalNamespace::__AvatarHand__Pose", modifiers: "", def_value: None }]
  constexpr __Avatar__Pose(::UnityEngine::Vector3 headPosition, ::UnityEngine::Quaternion headRotation, ::GlobalNamespace::__AvatarHand__Pose rightHandPose,
                           ::GlobalNamespace::__AvatarHand__Pose leftHandPose) noexcept;

  /// @brief Field headPosition, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 headPosition;

  /// @brief Field headRotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion headRotation;

  /// @brief Field rightHandPose, offset: 0x1c, size: 0x28, def value: None
  ::GlobalNamespace::__AvatarHand__Pose rightHandPose;

  /// @brief Field leftHandPose, offset: 0x44, size: 0x28, def value: None
  ::GlobalNamespace::__AvatarHand__Pose leftHandPose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6c };

  /// @brief Field handPoleWeight offset 0xffffffff size 0x4
  static constexpr float_t handPoleWeight{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Avatar__Pose, 0x6c>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar__Pose, headPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar__Pose, headRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar__Pose, rightHandPose) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar__Pose, leftHandPose) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnVisualLayerUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Avatar::OnVisualLayerUpdated*
class CORDL_TYPE __Avatar__OnVisualLayerUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1589e5c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newVisualLayer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1589ee0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1589e48, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t newVisualLayer);

  static inline ::GlobalNamespace::__Avatar__OnVisualLayerUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1589d84, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Avatar__OnVisualLayerUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Avatar__OnVisualLayerUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Avatar__OnVisualLayerUpdated(__Avatar__OnVisualLayerUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Avatar__OnVisualLayerUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Avatar__OnVisualLayerUpdated(__Avatar__OnVisualLayerUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Avatar__OnVisualLayerUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ZipperOpenRoutine>d__87
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Avatar::<ZipperOpenRoutine>d__87*
class CORDL_TYPE __Avatar___ZipperOpenRoutine_d__87 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::Avatar> __4__this;

  /// @brief Field <p>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startOpenness>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startOpenness_5__2, put = __cordl_internal_set__startOpenness_5__2)) float_t _startOpenness_5__2;

  /// @brief Field targetOpenness, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_targetOpenness, put = __cordl_internal_set_targetOpenness)) float_t targetOpenness;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1589ef0, size 0x184, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x158a074, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x158a07c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x158a0bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1589eec, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__startOpenness_5__2() const;

  constexpr float_t& __cordl_internal_get__startOpenness_5__2();

  constexpr float_t const& __cordl_internal_get_targetOpenness() const;

  constexpr float_t& __cordl_internal_get_targetOpenness();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startOpenness_5__2(float_t value);

  constexpr void __cordl_internal_set_targetOpenness(float_t value);

  /// @brief Method .ctor, addr 0x158981c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Avatar___ZipperOpenRoutine_d__87();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Avatar___ZipperOpenRoutine_d__87", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Avatar___ZipperOpenRoutine_d__87(__Avatar___ZipperOpenRoutine_d__87&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Avatar___ZipperOpenRoutine_d__87", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Avatar___ZipperOpenRoutine_d__87(__Avatar___ZipperOpenRoutine_d__87 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> _____4__this;

  /// @brief Field targetOpenness, offset: 0x28, size: 0x4, def value: None
  float_t ___targetOpenness;

  /// @brief Field <startOpenness>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____startOpenness_5__2;

  /// @brief Field <p>5__3, offset: 0x30, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, ___targetOpenness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, ____startOpenness_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87, ____p_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Avatar
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 425, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Avatar*
class CORDL_TYPE Avatar : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AvatarPortion = ::GlobalNamespace::__Avatar__AvatarPortion;

  using OnVisualLayerUpdated = ::GlobalNamespace::__Avatar__OnVisualLayerUpdated;

  using Pose = ::GlobalNamespace::__Avatar__Pose;

  using _ZipperOpenRoutine_d__87 = ::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87;

  /// @brief Field <visualLayer>k__BackingField, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__visualLayer_k__BackingField, put = __cordl_internal_set__visualLayer_k__BackingField)) int32_t _visualLayer_k__BackingField;

  /// @brief Field avatarPortion, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_avatarPortion, put = __cordl_internal_set_avatarPortion))::GlobalNamespace::__Avatar__AvatarPortion avatarPortion;

  /// @brief Field avatarPortionMeshes, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarPortionMeshes,
                      put = __cordl_internal_set_avatarPortionMeshes))::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> avatarPortionMeshes;

  /// @brief Field baseAvatarPortion, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_baseAvatarPortion, put = __cordl_internal_set_baseAvatarPortion))::GlobalNamespace::__Avatar__AvatarPortion baseAvatarPortion;

  /// @brief Field baseColor, offset 0x110, size 0x10
  __declspec(property(get = __cordl_internal_get_baseColor, put = __cordl_internal_set_baseColor))::UnityEngine::Color baseColor;

  /// @brief Field bodyAnchor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyAnchor, put = __cordl_internal_set_bodyAnchor))::UnityW<::UnityEngine::Transform> bodyAnchor;

  /// @brief Field bodyAnimationIntensity, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyAnimationIntensity, put = __cordl_internal_set_bodyAnimationIntensity)) float_t bodyAnimationIntensity;

  /// @brief Field cosmetics, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmetics, put = __cordl_internal_set_cosmetics))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics;

  /// @brief Field cosmeticsDisplay, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticsDisplay, put = __cordl_internal_set_cosmeticsDisplay))::UnityW<::GlobalNamespace::CosmeticsDisplay> cosmeticsDisplay;

  /// @brief Field curHangRatio, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_curHangRatio, put = __cordl_internal_set_curHangRatio)) float_t curHangRatio;

  /// @brief Field curZipperOpenRoutine, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_curZipperOpenRoutine, put = __cordl_internal_set_curZipperOpenRoutine))::UnityEngine::Coroutine* curZipperOpenRoutine;

  /// @brief Field curZipperOpenness, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_curZipperOpenness, put = __cordl_internal_set_curZipperOpenness)) float_t curZipperOpenness;

  /// @brief Field debugDistanceToGround, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_debugDistanceToGround, put = __cordl_internal_set_debugDistanceToGround)) float_t debugDistanceToGround;

  /// @brief Field eyeRenderers, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_eyeRenderers,
                      put = __cordl_internal_set_eyeRenderers))::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> eyeRenderers;

  /// @brief Field handAnchorLeft, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_handAnchorLeft, put = __cordl_internal_set_handAnchorLeft))::UnityW<::UnityEngine::Transform> handAnchorLeft;

  /// @brief Field handAnchorRight, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_handAnchorRight, put = __cordl_internal_set_handAnchorRight))::UnityW<::UnityEngine::Transform> handAnchorRight;

  /// @brief Field handRenderers, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_handRenderers,
                      put = __cordl_internal_set_handRenderers))::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*> handRenderers;

  /// @brief Field hangDistance, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_hangDistance, put = __cordl_internal_set_hangDistance)) float_t hangDistance;

  /// @brief Field hangRatioLerpSpeed, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_hangRatioLerpSpeed, put = __cordl_internal_set_hangRatioLerpSpeed)) float_t hangRatioLerpSpeed;

  /// @brief Field hangScale, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_hangScale, put = __cordl_internal_set_hangScale)) float_t hangScale;

  /// @brief Field hangingTorsoBoneLengths, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_hangingTorsoBoneLengths, put = __cordl_internal_set_hangingTorsoBoneLengths))::ArrayW<float_t, ::Array<float_t>*> hangingTorsoBoneLengths;

  /// @brief Field hangingTorsoBones, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_hangingTorsoBones,
                      put = __cordl_internal_set_hangingTorsoBones))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> hangingTorsoBones;

  /// @brief Field hasBaseColorOverride, offset 0x10c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasBaseColorOverride, put = __cordl_internal_set_hasBaseColorOverride)) bool hasBaseColorOverride;

  /// @brief Field hasOverrideAvatarPortion, offset 0x1a8, size 0x1
  __declspec(property(get = __cordl_internal_get_hasOverrideAvatarPortion, put = __cordl_internal_set_hasOverrideAvatarPortion)) bool hasOverrideAvatarPortion;

  /// @brief Field hasStatusEffectColor, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_hasStatusEffectColor, put = __cordl_internal_set_hasStatusEffectColor)) bool hasStatusEffectColor;

  /// @brief Field headAnchor, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_headAnchor, put = __cordl_internal_set_headAnchor))::UnityW<::UnityEngine::Transform> headAnchor;

  /// @brief Field headBone, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_headBone, put = __cordl_internal_set_headBone))::UnityW<::UnityEngine::Transform> headBone;

  /// @brief Field headTopAnchor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_headTopAnchor, put = __cordl_internal_set_headTopAnchor))::UnityW<::UnityEngine::Transform> headTopAnchor;

  /// @brief Field identity, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_identity, put = __cordl_internal_set_identity))::GlobalNamespace::AvatarIdentity* identity;

  /// @brief Field leftHand, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHand, put = __cordl_internal_set_leftHand))::UnityW<::GlobalNamespace::AvatarHand> leftHand;

  /// @brief Field leftHandIKPole, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandIKPole, put = __cordl_internal_set_leftHandIKPole))::UnityW<::UnityEngine::Transform> leftHandIKPole;

  /// @brief Field lowerArmAnchorLeft, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_lowerArmAnchorLeft, put = __cordl_internal_set_lowerArmAnchorLeft))::UnityW<::UnityEngine::Transform> lowerArmAnchorLeft;

  /// @brief Field lowerArmAnchorRight, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lowerArmAnchorRight, put = __cordl_internal_set_lowerArmAnchorRight))::UnityW<::UnityEngine::Transform> lowerArmAnchorRight;

  /// @brief Field mainRenderer, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_mainRenderer, put = __cordl_internal_set_mainRenderer))::UnityW<::UnityEngine::SkinnedMeshRenderer> mainRenderer;

  /// @brief Field maxForwardBackwardsVelocity, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_maxForwardBackwardsVelocity, put = __cordl_internal_set_maxForwardBackwardsVelocity)) float_t maxForwardBackwardsVelocity;

  /// @brief Field maxSideToSideVelocity, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSideToSideVelocity, put = __cordl_internal_set_maxSideToSideVelocity)) float_t maxSideToSideVelocity;

  /// @brief Field onVisualLayerUpdatedCallbacks, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_onVisualLayerUpdatedCallbacks,
                      put = __cordl_internal_set_onVisualLayerUpdatedCallbacks))::GlobalNamespace::__Avatar__OnVisualLayerUpdated* onVisualLayerUpdatedCallbacks;

  /// @brief Field overrideAvatarPortion, offset 0x1a4, size 0x4
  __declspec(property(get = __cordl_internal_get_overrideAvatarPortion, put = __cordl_internal_set_overrideAvatarPortion))::GlobalNamespace::__Avatar__AvatarPortion overrideAvatarPortion;

  /// @brief Field overrideSkinMat, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideSkinMat, put = __cordl_internal_set_overrideSkinMat))::UnityW<::UnityEngine::Material> overrideSkinMat;

  /// @brief Field rightHand, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHand, put = __cordl_internal_set_rightHand))::UnityW<::GlobalNamespace::AvatarHand> rightHand;

  /// @brief Field rightHandIKPole, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandIKPole, put = __cordl_internal_set_rightHandIKPole))::UnityW<::UnityEngine::Transform> rightHandIKPole;

  /// @brief Field statusEffectColor, offset 0x124, size 0x10
  __declspec(property(get = __cordl_internal_get_statusEffectColor, put = __cordl_internal_set_statusEffectColor))::UnityEngine::Color statusEffectColor;

  /// @brief Field stuffingTransferAnchor, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingTransferAnchor, put = __cordl_internal_set_stuffingTransferAnchor))::UnityW<::UnityEngine::Transform> stuffingTransferAnchor;

  /// @brief Field topTorsoAnimationIntensityMul, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_topTorsoAnimationIntensityMul, put = __cordl_internal_set_topTorsoAnimationIntensityMul)) float_t topTorsoAnimationIntensityMul;

  /// @brief Field topTorsoBoneRotationOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_topTorsoBoneRotationOffset, put = setStaticF_topTorsoBoneRotationOffset))::UnityEngine::Quaternion topTorsoBoneRotationOffset;

  /// @brief Field torsoBoneLengths, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_torsoBoneLengths, put = __cordl_internal_set_torsoBoneLengths))::ArrayW<float_t, ::Array<float_t>*> torsoBoneLengths;

  /// @brief Field tummyAnchorBasePositionLeft, offset 0x17c, size 0xc
  __declspec(property(get = __cordl_internal_get_tummyAnchorBasePositionLeft, put = __cordl_internal_set_tummyAnchorBasePositionLeft))::UnityEngine::Vector3 tummyAnchorBasePositionLeft;

  /// @brief Field tummyAnchorBasePositionRight, offset 0x170, size 0xc
  __declspec(property(get = __cordl_internal_get_tummyAnchorBasePositionRight, put = __cordl_internal_set_tummyAnchorBasePositionRight))::UnityEngine::Vector3 tummyAnchorBasePositionRight;

  /// @brief Field tummyAnchorLeft, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_tummyAnchorLeft, put = __cordl_internal_set_tummyAnchorLeft))::UnityW<::UnityEngine::Transform> tummyAnchorLeft;

  /// @brief Field tummyAnchorRight, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_tummyAnchorRight, put = __cordl_internal_set_tummyAnchorRight))::UnityW<::UnityEngine::Transform> tummyAnchorRight;

  /// @brief Field upperArmAnchorLeft, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_upperArmAnchorLeft, put = __cordl_internal_set_upperArmAnchorLeft))::UnityW<::UnityEngine::Transform> upperArmAnchorLeft;

  /// @brief Field upperArmAnchorRight, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_upperArmAnchorRight, put = __cordl_internal_set_upperArmAnchorRight))::UnityW<::UnityEngine::Transform> upperArmAnchorRight;

  __declspec(property(get = get_visualLayer, put = set_visualLayer)) int32_t visualLayer;

  /// @brief Field zipperAnchor, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_zipperAnchor, put = __cordl_internal_set_zipperAnchor))::UnityW<::UnityEngine::Transform> zipperAnchor;

  /// @brief Field zipperAnchorEulers, offset 0xd8, size 0xc
  __declspec(property(get = __cordl_internal_get_zipperAnchorEulers, put = __cordl_internal_set_zipperAnchorEulers))::UnityEngine::Vector3 zipperAnchorEulers;

  /// @brief Method Awake, addr 0x1587930, size 0x2c0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearIdentity, addr 0x1588930, size 0x74, virtual false, abstract: false, final false
  inline void ClearIdentity();

  /// @brief Method ClearOverrideAvatarPortion, addr 0x1589438, size 0x8, virtual false, abstract: false, final false
  inline void ClearOverrideAvatarPortion();

  /// @brief Method ClearOverrideBaseColor, addr 0x1588b2c, size 0x10, virtual false, abstract: false, final false
  inline void ClearOverrideBaseColor();

  /// @brief Method ExpressPose, addr 0x1587cdc, size 0x6bc, virtual false, abstract: false, final false
  inline void ExpressPose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__Avatar__Pose pose, ::UnityEngine::Vector3 velocity,
                          float_t distanceToGround, bool doLerp);

  /// @brief Method GetHand, addr 0x1589844, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::AvatarHand> GetHand(bool right);

  /// @brief Method GetItemAnchor, addr 0x158985c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetItemAnchor(::GlobalNamespace::__Item__AnchorState anchor);

  /// @brief Method GetStuffingTransferAnchor, addr 0x15898d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetStuffingTransferAnchor();

  static inline ::GlobalNamespace::Avatar* New_ctor();

  /// @brief Method RefreshAvatarPortion, addr 0x15893fc, size 0x2c, virtual false, abstract: false, final false
  inline void RefreshAvatarPortion();

  /// @brief Method RefreshColor, addr 0x15889a4, size 0x16c, virtual false, abstract: false, final false
  inline void RefreshColor();

  /// @brief Method SetAlwaysVisible, addr 0x1588cfc, size 0x1e4, virtual false, abstract: false, final false
  inline void SetAlwaysVisible(bool isAlwaysVisible);

  /// @brief Method SetAvatarPortion, addr 0x1589440, size 0x1a4, virtual false, abstract: false, final false
  inline void SetAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion);

  /// @brief Method SetBaseAvatarPortion, addr 0x15893f4, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion);

  /// @brief Method SetCosmetics, addr 0x1589054, size 0x20, virtual false, abstract: false, final false
  inline void SetCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics);

  /// @brief Method SetIdentity, addr 0x1588844, size 0xec, virtual false, abstract: false, final false
  inline void SetIdentity(::GlobalNamespace::AvatarIdentity* identity);

  /// @brief Method SetOverrideAvatarPortion, addr 0x1589428, size 0x10, virtual false, abstract: false, final false
  inline void SetOverrideAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion newAvatarPortion);

  /// @brief Method SetOverrideBaseColor, addr 0x1588b10, size 0x1c, virtual false, abstract: false, final false
  inline void SetOverrideBaseColor(::UnityEngine::Color color);

  /// @brief Method SetSkinMaterial, addr 0x1588b3c, size 0xc8, virtual false, abstract: false, final false
  inline void SetSkinMaterial(::UnityEngine::Material* newMat);

  /// @brief Method SetStatusEffect, addr 0x1588c04, size 0xf8, virtual false, abstract: false, final false
  inline void SetStatusEffect(::GlobalNamespace::__Player__StatusEffect statusEffect);

  /// @brief Method SetZipperOpenness, addr 0x1587bf0, size 0xec, virtual false, abstract: false, final false
  inline void SetZipperOpenness(float_t targetOpenness, bool instant);

  /// @brief Method ZipperOpenRoutine, addr 0x15897a4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ZipperOpenRoutine(float_t targetOpenness);

  constexpr int32_t const& __cordl_internal_get__visualLayer_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__visualLayer_k__BackingField();

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& __cordl_internal_get_avatarPortion() const;

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion& __cordl_internal_get_avatarPortion();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> const& __cordl_internal_get_avatarPortionMeshes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*>& __cordl_internal_get_avatarPortionMeshes();

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& __cordl_internal_get_baseAvatarPortion() const;

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion& __cordl_internal_get_baseAvatarPortion();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_baseColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_baseColor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyAnchor();

  constexpr float_t const& __cordl_internal_get_bodyAnimationIntensity() const;

  constexpr float_t& __cordl_internal_get_bodyAnimationIntensity();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*& __cordl_internal_get_cosmetics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*> const& __cordl_internal_get_cosmetics() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& __cordl_internal_get_cosmeticsDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& __cordl_internal_get_cosmeticsDisplay();

  constexpr float_t const& __cordl_internal_get_curHangRatio() const;

  constexpr float_t& __cordl_internal_get_curHangRatio();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curZipperOpenRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curZipperOpenRoutine() const;

  constexpr float_t const& __cordl_internal_get_curZipperOpenness() const;

  constexpr float_t& __cordl_internal_get_curZipperOpenness();

  constexpr float_t const& __cordl_internal_get_debugDistanceToGround() const;

  constexpr float_t& __cordl_internal_get_debugDistanceToGround();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const& __cordl_internal_get_eyeRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& __cordl_internal_get_eyeRenderers();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handAnchorLeft() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handAnchorLeft();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handAnchorRight() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handAnchorRight();

  constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*> const& __cordl_internal_get_handRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*>& __cordl_internal_get_handRenderers();

  constexpr float_t const& __cordl_internal_get_hangDistance() const;

  constexpr float_t& __cordl_internal_get_hangDistance();

  constexpr float_t const& __cordl_internal_get_hangRatioLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_hangRatioLerpSpeed();

  constexpr float_t const& __cordl_internal_get_hangScale() const;

  constexpr float_t& __cordl_internal_get_hangScale();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_hangingTorsoBoneLengths() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_hangingTorsoBoneLengths();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_hangingTorsoBones() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_hangingTorsoBones();

  constexpr bool const& __cordl_internal_get_hasBaseColorOverride() const;

  constexpr bool& __cordl_internal_get_hasBaseColorOverride();

  constexpr bool const& __cordl_internal_get_hasOverrideAvatarPortion() const;

  constexpr bool& __cordl_internal_get_hasOverrideAvatarPortion();

  constexpr bool const& __cordl_internal_get_hasStatusEffectColor() const;

  constexpr bool& __cordl_internal_get_hasStatusEffectColor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headAnchor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headBone() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headBone();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTopAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTopAnchor();

  constexpr ::GlobalNamespace::AvatarIdentity*& __cordl_internal_get_identity();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarIdentity*> const& __cordl_internal_get_identity() const;

  constexpr ::UnityW<::GlobalNamespace::AvatarHand> const& __cordl_internal_get_leftHand() const;

  constexpr ::UnityW<::GlobalNamespace::AvatarHand>& __cordl_internal_get_leftHand();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandIKPole() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandIKPole();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lowerArmAnchorLeft() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lowerArmAnchorLeft();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lowerArmAnchorRight() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lowerArmAnchorRight();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_mainRenderer() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_mainRenderer();

  constexpr float_t const& __cordl_internal_get_maxForwardBackwardsVelocity() const;

  constexpr float_t& __cordl_internal_get_maxForwardBackwardsVelocity();

  constexpr float_t const& __cordl_internal_get_maxSideToSideVelocity() const;

  constexpr float_t& __cordl_internal_get_maxSideToSideVelocity();

  constexpr ::GlobalNamespace::__Avatar__OnVisualLayerUpdated*& __cordl_internal_get_onVisualLayerUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Avatar__OnVisualLayerUpdated*> const& __cordl_internal_get_onVisualLayerUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion const& __cordl_internal_get_overrideAvatarPortion() const;

  constexpr ::GlobalNamespace::__Avatar__AvatarPortion& __cordl_internal_get_overrideAvatarPortion();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_overrideSkinMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_overrideSkinMat();

  constexpr ::UnityW<::GlobalNamespace::AvatarHand> const& __cordl_internal_get_rightHand() const;

  constexpr ::UnityW<::GlobalNamespace::AvatarHand>& __cordl_internal_get_rightHand();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandIKPole() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandIKPole();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_statusEffectColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_statusEffectColor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stuffingTransferAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stuffingTransferAnchor();

  constexpr float_t const& __cordl_internal_get_topTorsoAnimationIntensityMul() const;

  constexpr float_t& __cordl_internal_get_topTorsoAnimationIntensityMul();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_torsoBoneLengths() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_torsoBoneLengths();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tummyAnchorBasePositionLeft() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_tummyAnchorBasePositionLeft();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tummyAnchorBasePositionRight() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_tummyAnchorBasePositionRight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tummyAnchorLeft() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tummyAnchorLeft();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tummyAnchorRight() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tummyAnchorRight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upperArmAnchorLeft() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upperArmAnchorLeft();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upperArmAnchorRight() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upperArmAnchorRight();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zipperAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zipperAnchor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_zipperAnchorEulers() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_zipperAnchorEulers();

  constexpr void __cordl_internal_set__visualLayer_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_avatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value);

  constexpr void __cordl_internal_set_avatarPortionMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> value);

  constexpr void __cordl_internal_set_baseAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value);

  constexpr void __cordl_internal_set_baseColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_bodyAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bodyAnimationIntensity(float_t value);

  constexpr void __cordl_internal_set_cosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* value);

  constexpr void __cordl_internal_set_cosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value);

  constexpr void __cordl_internal_set_curHangRatio(float_t value);

  constexpr void __cordl_internal_set_curZipperOpenRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curZipperOpenness(float_t value);

  constexpr void __cordl_internal_set_debugDistanceToGround(float_t value);

  constexpr void __cordl_internal_set_eyeRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value);

  constexpr void __cordl_internal_set_handAnchorLeft(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_handAnchorRight(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_handRenderers(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*> value);

  constexpr void __cordl_internal_set_hangDistance(float_t value);

  constexpr void __cordl_internal_set_hangRatioLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_hangScale(float_t value);

  constexpr void __cordl_internal_set_hangingTorsoBoneLengths(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_hangingTorsoBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_hasBaseColorOverride(bool value);

  constexpr void __cordl_internal_set_hasOverrideAvatarPortion(bool value);

  constexpr void __cordl_internal_set_hasStatusEffectColor(bool value);

  constexpr void __cordl_internal_set_headAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_headBone(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_headTopAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_identity(::GlobalNamespace::AvatarIdentity* value);

  constexpr void __cordl_internal_set_leftHand(::UnityW<::GlobalNamespace::AvatarHand> value);

  constexpr void __cordl_internal_set_leftHandIKPole(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_lowerArmAnchorLeft(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_lowerArmAnchorRight(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_mainRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  constexpr void __cordl_internal_set_maxForwardBackwardsVelocity(float_t value);

  constexpr void __cordl_internal_set_maxSideToSideVelocity(float_t value);

  constexpr void __cordl_internal_set_onVisualLayerUpdatedCallbacks(::GlobalNamespace::__Avatar__OnVisualLayerUpdated* value);

  constexpr void __cordl_internal_set_overrideAvatarPortion(::GlobalNamespace::__Avatar__AvatarPortion value);

  constexpr void __cordl_internal_set_overrideSkinMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_rightHand(::UnityW<::GlobalNamespace::AvatarHand> value);

  constexpr void __cordl_internal_set_rightHandIKPole(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_statusEffectColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_stuffingTransferAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_topTorsoAnimationIntensityMul(float_t value);

  constexpr void __cordl_internal_set_torsoBoneLengths(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_tummyAnchorBasePositionLeft(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_tummyAnchorBasePositionRight(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_tummyAnchorLeft(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_tummyAnchorRight(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_upperArmAnchorLeft(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_upperArmAnchorRight(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_zipperAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_zipperAnchorEulers(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x15898dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF_topTorsoBoneRotationOffset();

  /// @brief Method get_visualLayer, addr 0x1587920, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_visualLayer();

  static inline void setStaticF_topTorsoBoneRotationOffset(::UnityEngine::Quaternion value);

  /// @brief Method set_visualLayer, addr 0x1587928, size 0x8, virtual false, abstract: false, final false
  inline void set_visualLayer(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Avatar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Avatar(Avatar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Avatar(Avatar const&) = delete;

  /// @brief Field headBone, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___headBone;

  /// @brief Field rightHand, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AvatarHand> ___rightHand;

  /// @brief Field leftHand, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AvatarHand> ___leftHand;

  /// @brief Field rightHandIKPole, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHandIKPole;

  /// @brief Field leftHandIKPole, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHandIKPole;

  /// @brief Field bodyAnchor, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bodyAnchor;

  /// @brief Field headAnchor, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___headAnchor;

  /// @brief Field headTopAnchor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___headTopAnchor;

  /// @brief Field handAnchorRight, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___handAnchorRight;

  /// @brief Field handAnchorLeft, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___handAnchorLeft;

  /// @brief Field upperArmAnchorRight, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___upperArmAnchorRight;

  /// @brief Field upperArmAnchorLeft, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___upperArmAnchorLeft;

  /// @brief Field lowerArmAnchorRight, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___lowerArmAnchorRight;

  /// @brief Field lowerArmAnchorLeft, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___lowerArmAnchorLeft;

  /// @brief Field stuffingTransferAnchor, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___stuffingTransferAnchor;

  /// @brief Field maxSideToSideVelocity, offset: 0x90, size: 0x4, def value: None
  float_t ___maxSideToSideVelocity;

  /// @brief Field maxForwardBackwardsVelocity, offset: 0x94, size: 0x4, def value: None
  float_t ___maxForwardBackwardsVelocity;

  /// @brief Field bodyAnimationIntensity, offset: 0x98, size: 0x4, def value: None
  float_t ___bodyAnimationIntensity;

  /// @brief Field topTorsoAnimationIntensityMul, offset: 0x9c, size: 0x4, def value: None
  float_t ___topTorsoAnimationIntensityMul;

  /// @brief Field hangingTorsoBones, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___hangingTorsoBones;

  /// @brief Field hangDistance, offset: 0xa8, size: 0x4, def value: None
  float_t ___hangDistance;

  /// @brief Field hangScale, offset: 0xac, size: 0x4, def value: None
  float_t ___hangScale;

  /// @brief Field torsoBoneLengths, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___torsoBoneLengths;

  /// @brief Field hangingTorsoBoneLengths, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___hangingTorsoBoneLengths;

  /// @brief Field debugDistanceToGround, offset: 0xc0, size: 0x4, def value: None
  float_t ___debugDistanceToGround;

  /// @brief Field curHangRatio, offset: 0xc4, size: 0x4, def value: None
  float_t ___curHangRatio;

  /// @brief Field hangRatioLerpSpeed, offset: 0xc8, size: 0x4, def value: None
  float_t ___hangRatioLerpSpeed;

  /// @brief Field zipperAnchor, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___zipperAnchor;

  /// @brief Field zipperAnchorEulers, offset: 0xd8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___zipperAnchorEulers;

  /// @brief Field mainRenderer, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ___mainRenderer;

  /// @brief Field handRenderers, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>, ::Array<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*> ___handRenderers;

  /// @brief Field eyeRenderers, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> ___eyeRenderers;

  /// @brief Field cosmeticsDisplay, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsDisplay> ___cosmeticsDisplay;

  /// @brief Field <visualLayer>k__BackingField, offset: 0x108, size: 0x4, def value: None
  int32_t ____visualLayer_k__BackingField;

  /// @brief Field hasBaseColorOverride, offset: 0x10c, size: 0x1, def value: None
  bool ___hasBaseColorOverride;

  /// @brief Field baseColor, offset: 0x110, size: 0x10, def value: None
  ::UnityEngine::Color ___baseColor;

  /// @brief Field hasStatusEffectColor, offset: 0x120, size: 0x1, def value: None
  bool ___hasStatusEffectColor;

  /// @brief Field statusEffectColor, offset: 0x124, size: 0x10, def value: None
  ::UnityEngine::Color ___statusEffectColor;

  /// @brief Field identity, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::AvatarIdentity* ___identity;

  /// @brief Field overrideSkinMat, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___overrideSkinMat;

  /// @brief Field cosmetics, offset: 0x148, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* ___cosmetics;

  /// @brief Field avatarPortion, offset: 0x150, size: 0x4, def value: None
  ::GlobalNamespace::__Avatar__AvatarPortion ___avatarPortion;

  /// @brief Field avatarPortionMeshes, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Mesh>, ::Array<::UnityW<::UnityEngine::Mesh>>*> ___avatarPortionMeshes;

  /// @brief Field tummyAnchorRight, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___tummyAnchorRight;

  /// @brief Field tummyAnchorLeft, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___tummyAnchorLeft;

  /// @brief Field tummyAnchorBasePositionRight, offset: 0x170, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___tummyAnchorBasePositionRight;

  /// @brief Field tummyAnchorBasePositionLeft, offset: 0x17c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___tummyAnchorBasePositionLeft;

  /// @brief Field curZipperOpenRoutine, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curZipperOpenRoutine;

  /// @brief Field curZipperOpenness, offset: 0x190, size: 0x4, def value: None
  float_t ___curZipperOpenness;

  /// @brief Field onVisualLayerUpdatedCallbacks, offset: 0x198, size: 0x8, def value: None
  ::GlobalNamespace::__Avatar__OnVisualLayerUpdated* ___onVisualLayerUpdatedCallbacks;

  /// @brief Field baseAvatarPortion, offset: 0x1a0, size: 0x4, def value: None
  ::GlobalNamespace::__Avatar__AvatarPortion ___baseAvatarPortion;

  /// @brief Field overrideAvatarPortion, offset: 0x1a4, size: 0x4, def value: None
  ::GlobalNamespace::__Avatar__AvatarPortion ___overrideAvatarPortion;

  /// @brief Field hasOverrideAvatarPortion, offset: 0x1a8, size: 0x1, def value: None
  bool ___hasOverrideAvatarPortion;

  /// @brief Field mainRendererSkinMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t mainRendererSkinMatIndex{ static_cast<int32_t>(0x0) };

  /// @brief Field tummyAnchorLeftClosedX offset 0xffffffff size 0x4
  static constexpr float_t tummyAnchorLeftClosedX{ 0.0321 };

  /// @brief Field tummyAnchorLeftOpenX offset 0xffffffff size 0x4
  static constexpr float_t tummyAnchorLeftOpenX{ 0.11 };

  /// @brief Field tummyAnchorRightClosedX offset 0xffffffff size 0x4
  static constexpr float_t tummyAnchorRightClosedX{ -0.0321 };

  /// @brief Field tummyAnchorRightOpenX offset 0xffffffff size 0x4
  static constexpr float_t tummyAnchorRightOpenX{ -0.11 };

  /// @brief Field zipperDownAngle offset 0xffffffff size 0x4
  static constexpr float_t zipperDownAngle{ 60.0 };

  /// @brief Field zipperLiftVelocityEnd offset 0xffffffff size 0x4
  static constexpr float_t zipperLiftVelocityEnd{ -3.5 };

  /// @brief Field zipperLiftVelocityStart offset 0xffffffff size 0x4
  static constexpr float_t zipperLiftVelocityStart{ -0.0 };

  /// @brief Field zipperOpenDuration offset 0xffffffff size 0x4
  static constexpr float_t zipperOpenDuration{ 0.2 };

  /// @brief Field zipperUpAngle offset 0xffffffff size 0x4
  static constexpr float_t zipperUpAngle{ -65.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Avatar, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___headBone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___rightHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___leftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___rightHandIKPole) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___leftHandIKPole) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___bodyAnchor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___headAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___headTopAnchor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___handAnchorRight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___handAnchorLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___upperArmAnchorRight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___upperArmAnchorLeft) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___lowerArmAnchorRight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___lowerArmAnchorLeft) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___stuffingTransferAnchor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___maxSideToSideVelocity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___maxForwardBackwardsVelocity) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___bodyAnimationIntensity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___topTorsoAnimationIntensityMul) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hangingTorsoBones) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hangDistance) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hangScale) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___torsoBoneLengths) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hangingTorsoBoneLengths) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___debugDistanceToGround) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___curHangRatio) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hangRatioLerpSpeed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___zipperAnchor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___zipperAnchorEulers) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___mainRenderer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___handRenderers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___eyeRenderers) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___cosmeticsDisplay) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ____visualLayer_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hasBaseColorOverride) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___baseColor) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hasStatusEffectColor) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___statusEffectColor) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___identity) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___overrideSkinMat) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___cosmetics) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___avatarPortion) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___avatarPortionMeshes) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___tummyAnchorRight) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___tummyAnchorLeft) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___tummyAnchorBasePositionRight) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___tummyAnchorBasePositionLeft) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___curZipperOpenRoutine) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___curZipperOpenness) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___onVisualLayerUpdatedCallbacks) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___baseAvatarPortion) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___overrideAvatarPortion) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Avatar, ___hasOverrideAvatarPortion) == 0x1a8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Avatar__AvatarPortion, "", "Avatar/AvatarPortion");
NEED_NO_BOX(::GlobalNamespace::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Avatar*, "", "Avatar");
NEED_NO_BOX(::GlobalNamespace::__Avatar__OnVisualLayerUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Avatar__OnVisualLayerUpdated*, "", "Avatar/OnVisualLayerUpdated");
NEED_NO_BOX(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Avatar___ZipperOpenRoutine_d__87*, "", "Avatar/<ZipperOpenRoutine>d__87");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Avatar__Pose, "", "Avatar/Pose");
