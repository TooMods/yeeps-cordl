#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapObject)
namespace GlobalNamespace {
class ColliderBatch;
}
namespace GlobalNamespace {
class MapObjectBatch;
}
namespace GlobalNamespace {
class MapObjectHandInteractionExtender;
}
namespace GlobalNamespace {
class MapObjectRestrictionData;
}
namespace GlobalNamespace {
struct MapObjectSyncData;
}
namespace GlobalNamespace {
struct SignalChannel;
}
namespace GlobalNamespace {
struct __MapObject__DropType;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
struct __MapObject__ForcePickupState;
}
namespace GlobalNamespace {
struct __MapObject__MaterialType;
}
namespace GlobalNamespace {
class __MapObject__OnTransitionComlete;
}
namespace GlobalNamespace {
class __MapObject___DoScaleTransitionCoroutine_d__116;
}
namespace GlobalNamespace {
class __MapObject___TryBecomeSolidRoutine_d__85;
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
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MapObject__DropType;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
struct __MapObject__ForcePickupState;
}
namespace GlobalNamespace {
struct __MapObject__MaterialType;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class __MapObject__OnTransitionComlete;
}
namespace GlobalNamespace {
class __MapObject___DoScaleTransitionCoroutine_d__116;
}
namespace GlobalNamespace {
class __MapObject___TryBecomeSolidRoutine_d__85;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MapObject__DropType);
MARK_VAL_T(::GlobalNamespace::__MapObject__Facing);
MARK_VAL_T(::GlobalNamespace::__MapObject__ForcePickupState);
MARK_VAL_T(::GlobalNamespace::__MapObject__MaterialType);
MARK_REF_PTR_T(::GlobalNamespace::MapObject);
MARK_REF_PTR_T(::GlobalNamespace::__MapObject__OnTransitionComlete);
MARK_REF_PTR_T(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116);
MARK_REF_PTR_T(::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85);
// Type: ::Facing
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObject::Facing
struct CORDL_TYPE __MapObject__Facing {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MapObject__Facing_Unwrapped
  enum struct ____MapObject__Facing_Unwrapped : int32_t {
    __E_XPositive = static_cast<int32_t>(0x0),
    __E_XNegative = static_cast<int32_t>(0x1),
    __E_YPositive = static_cast<int32_t>(0x2),
    __E_YNegative = static_cast<int32_t>(0x3),
    __E_ZPositive = static_cast<int32_t>(0x4),
    __E_ZNegative = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MapObject__Facing_Unwrapped() const noexcept {
    return static_cast<____MapObject__Facing_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObject__Facing();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MapObject__Facing(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field XNegative value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MapObject__Facing const XNegative;

  /// @brief Field XPositive value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MapObject__Facing const XPositive;

  /// @brief Field YNegative value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MapObject__Facing const YNegative;

  /// @brief Field YPositive value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MapObject__Facing const YPositive;

  /// @brief Field ZNegative value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__MapObject__Facing const ZNegative;

  /// @brief Field ZPositive value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MapObject__Facing const ZPositive;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject__Facing, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject__Facing, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DropType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObject::DropType
struct CORDL_TYPE __MapObject__DropType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MapObject__DropType_Unwrapped
  enum struct ____MapObject__DropType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Item = static_cast<int32_t>(0x1),
    __E_Reimbursement = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MapObject__DropType_Unwrapped() const noexcept {
    return static_cast<____MapObject__DropType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObject__DropType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MapObject__DropType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Item value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MapObject__DropType const Item;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MapObject__DropType const None;

  /// @brief Field Reimbursement value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MapObject__DropType const Reimbursement;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject__DropType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject__DropType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MaterialType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObject::MaterialType
struct CORDL_TYPE __MapObject__MaterialType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MapObject__MaterialType_Unwrapped
  enum struct ____MapObject__MaterialType_Unwrapped : int32_t {
    __E_solid = static_cast<int32_t>(0x0),
    __E_solidHovered = static_cast<int32_t>(0x1),
    __E_dephysicalized = static_cast<int32_t>(0x2),
    __E_itemPreview = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MapObject__MaterialType_Unwrapped() const noexcept {
    return static_cast<____MapObject__MaterialType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObject__MaterialType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MapObject__MaterialType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field dephysicalized value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MapObject__MaterialType const dephysicalized;

  /// @brief Field itemPreview value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MapObject__MaterialType const itemPreview;

  /// @brief Field solid value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MapObject__MaterialType const solid;

  /// @brief Field solidHovered value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MapObject__MaterialType const solidHovered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject__MaterialType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject__MaterialType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ForcePickupState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObject::ForcePickupState
struct CORDL_TYPE __MapObject__ForcePickupState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MapObject__ForcePickupState_Unwrapped
  enum struct ____MapObject__ForcePickupState_Unwrapped : int32_t {
    __E_useDefault = static_cast<int32_t>(0x0),
    __E_forceAllow = static_cast<int32_t>(0x1),
    __E_forceDisallow = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MapObject__ForcePickupState_Unwrapped() const noexcept {
    return static_cast<____MapObject__ForcePickupState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObject__ForcePickupState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MapObject__ForcePickupState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field forceAllow value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MapObject__ForcePickupState const forceAllow;

  /// @brief Field forceDisallow value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MapObject__ForcePickupState const forceDisallow;

  /// @brief Field useDefault value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MapObject__ForcePickupState const useDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject__ForcePickupState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject__ForcePickupState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTransitionComlete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObject::OnTransitionComlete*
class CORDL_TYPE __MapObject__OnTransitionComlete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x307e6d8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x307e6f8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x307e6c4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__MapObject__OnTransitionComlete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x307d01c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObject__OnTransitionComlete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapObject__OnTransitionComlete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapObject__OnTransitionComlete(__MapObject__OnTransitionComlete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapObject__OnTransitionComlete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapObject__OnTransitionComlete(__MapObject__OnTransitionComlete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject__OnTransitionComlete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryBecomeSolidRoutine>d__85
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObject::<TryBecomeSolidRoutine>d__85*
class CORDL_TYPE __MapObject___TryBecomeSolidRoutine_d__85 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapObject> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x307e708, size 0xc4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x307e7cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x307e7d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x307e814, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x307e704, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapObject> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapObject>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapObject> value);

  /// @brief Method .ctor, addr 0x307b984, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MapObject___TryBecomeSolidRoutine_d__85();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapObject___TryBecomeSolidRoutine_d__85", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapObject___TryBecomeSolidRoutine_d__85(__MapObject___TryBecomeSolidRoutine_d__85&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapObject___TryBecomeSolidRoutine_d__85", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapObject___TryBecomeSolidRoutine_d__85(__MapObject___TryBecomeSolidRoutine_d__85 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapObject> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoScaleTransitionCoroutine>d__116
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObject::<DoScaleTransitionCoroutine>d__116*
class CORDL_TYPE __MapObject___DoScaleTransitionCoroutine_d__116 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapObject> __4__this;

  /// @brief Field <startScale>5__2, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get__startScale_5__2, put = __cordl_internal_set__startScale_5__2))::UnityEngine::Vector3 _startScale_5__2;

  /// @brief Field <timer>5__3, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__timer_5__3, put = __cordl_internal_set__timer_5__3)) float_t _timer_5__3;

  /// @brief Field curve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field duration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field onTransitionComlete, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onTransitionComlete, put = __cordl_internal_set_onTransitionComlete))::GlobalNamespace::__MapObject__OnTransitionComlete* onTransitionComlete;

  /// @brief Field targetScale, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale))::UnityEngine::Vector3 targetScale;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x307e820, size 0x168, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x307e988, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x307e990, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x307e9d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x307e81c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MapObject> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapObject>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale_5__2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale_5__2();

  constexpr float_t const& __cordl_internal_get__timer_5__3() const;

  constexpr float_t& __cordl_internal_get__timer_5__3();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_curve() const;

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::__MapObject__OnTransitionComlete*& __cordl_internal_get_onTransitionComlete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MapObject__OnTransitionComlete*> const& __cordl_internal_get_onTransitionComlete() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetScale();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapObject> value);

  constexpr void __cordl_internal_set__startScale_5__2(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__timer_5__3(float_t value);

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_onTransitionComlete(::GlobalNamespace::__MapObject__OnTransitionComlete* value);

  constexpr void __cordl_internal_set_targetScale(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x307d374, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MapObject___DoScaleTransitionCoroutine_d__116();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapObject___DoScaleTransitionCoroutine_d__116", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapObject___DoScaleTransitionCoroutine_d__116(__MapObject___DoScaleTransitionCoroutine_d__116&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapObject___DoScaleTransitionCoroutine_d__116", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapObject___DoScaleTransitionCoroutine_d__116(__MapObject___DoScaleTransitionCoroutine_d__116 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapObject> _____4__this;

  /// @brief Field targetScale, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___targetScale;

  /// @brief Field curve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field duration, offset: 0x40, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field onTransitionComlete, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__MapObject__OnTransitionComlete* ___onTransitionComlete;

  /// @brief Field <startScale>5__2, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startScale_5__2;

  /// @brief Field <timer>5__3, offset: 0x5c, size: 0x4, def value: None
  float_t ____timer_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, ___targetScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, ___curve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, ___duration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, ___onTransitionComlete) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, ____startScale_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116, ____timer_5__3) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObject
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObject*
class CORDL_TYPE MapObject : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DropType = ::GlobalNamespace::__MapObject__DropType;

  using Facing = ::GlobalNamespace::__MapObject__Facing;

  using ForcePickupState = ::GlobalNamespace::__MapObject__ForcePickupState;

  using MaterialType = ::GlobalNamespace::__MapObject__MaterialType;

  using OnTransitionComlete = ::GlobalNamespace::__MapObject__OnTransitionComlete;

  using _DoScaleTransitionCoroutine_d__116 = ::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116;

  using _TryBecomeSolidRoutine_d__85 = ::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85;

  /// @brief Field <colorKey>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__colorKey_k__BackingField, put = __cordl_internal_set__colorKey_k__BackingField))::StringW _colorKey_k__BackingField;

  /// @brief Field <isDephysicalized>k__BackingField, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get__isDephysicalized_k__BackingField, put = __cordl_internal_set__isDephysicalized_k__BackingField)) bool _isDephysicalized_k__BackingField;

  /// @brief Field <key>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <materials>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__materials_k__BackingField,
                      put = __cordl_internal_set__materials_k__BackingField))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> _materials_k__BackingField;

  /// @brief Field <ownerAccountID>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerAccountID_k__BackingField, put = __cordl_internal_set__ownerAccountID_k__BackingField))::StringW _ownerAccountID_k__BackingField;

  /// @brief Field <placedDimensions>k__BackingField, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__placedDimensions_k__BackingField,
                      put = __cordl_internal_set__placedDimensions_k__BackingField))::UnityEngine::Vector3Int _placedDimensions_k__BackingField;

  /// @brief Field <placedForwardFacing>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__placedForwardFacing_k__BackingField,
                      put = __cordl_internal_set__placedForwardFacing_k__BackingField))::GlobalNamespace::__MapObject__Facing _placedForwardFacing_k__BackingField;

  /// @brief Field <placedPosition>k__BackingField, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__placedPosition_k__BackingField, put = __cordl_internal_set__placedPosition_k__BackingField))::UnityEngine::Vector3Int _placedPosition_k__BackingField;

  /// @brief Field <placedUpFacing>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__placedUpFacing_k__BackingField,
                      put = __cordl_internal_set__placedUpFacing_k__BackingField))::GlobalNamespace::__MapObject__Facing _placedUpFacing_k__BackingField;

  /// @brief Field <placementPending>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__placementPending_k__BackingField, put = __cordl_internal_set__placementPending_k__BackingField)) bool _placementPending_k__BackingField;

  /// @brief Field batch, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_batch, put = __cordl_internal_set_batch))::GlobalNamespace::MapObjectBatch* batch;

  /// @brief Field blocksLight, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_blocksLight, put = __cordl_internal_set_blocksLight)) bool blocksLight;

  /// @brief Field breakSoundKey, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_breakSoundKey, put = __cordl_internal_set_breakSoundKey))::StringW breakSoundKey;

  /// @brief Field colliderBatch, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_colliderBatch, put = __cordl_internal_set_colliderBatch))::GlobalNamespace::ColliderBatch* colliderBatch;

  /// @brief Field colliders, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_colliders, put = __cordl_internal_set_colliders))::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> colliders;

  __declspec(property(get = get_colorKey, put = set_colorKey))::StringW colorKey;

  /// @brief Field curScaleTransitionCoroutine, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_curScaleTransitionCoroutine, put = __cordl_internal_set_curScaleTransitionCoroutine))::UnityEngine::Coroutine* curScaleTransitionCoroutine;

  /// @brief Field distanceToPlayerHeadToIgnoreDephysicalize, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceToPlayerHeadToIgnoreDephysicalize,
                      put = __cordl_internal_set_distanceToPlayerHeadToIgnoreDephysicalize)) float_t distanceToPlayerHeadToIgnoreDephysicalize;

  /// @brief Field footstepSoundKey, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_footstepSoundKey, put = __cordl_internal_set_footstepSoundKey))::StringW footstepSoundKey;

  /// @brief Field forcePickupState, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_forcePickupState, put = __cordl_internal_set_forcePickupState))::GlobalNamespace::__MapObject__ForcePickupState forcePickupState;

  /// @brief Field hoveringHands, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_hoveringHands,
                      put = __cordl_internal_set_hoveringHands))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectHandInteractionExtender>>* hoveringHands;

  __declspec(property(get = get_isDephysicalized, put = set_isDephysicalized)) bool isDephysicalized;

  __declspec(property(get = get_isScaling)) bool isScaling;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  /// @brief Field maintainUp, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainUp, put = __cordl_internal_set_maintainUp)) bool maintainUp;

  __declspec(property(get = get_materials, put = set_materials))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> materials;

  __declspec(property(get = get_ownerAccountID, put = set_ownerAccountID))::StringW ownerAccountID;

  /// @brief Field pendingTimer, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_pendingTimer, put = __cordl_internal_set_pendingTimer)) float_t pendingTimer;

  /// @brief Field pickupSoundKey, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_pickupSoundKey, put = __cordl_internal_set_pickupSoundKey))::StringW pickupSoundKey;

  /// @brief Field placeSoundKey, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_placeSoundKey, put = __cordl_internal_set_placeSoundKey))::StringW placeSoundKey;

  /// @brief Field placeSoundPitchVariance, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_placeSoundPitchVariance, put = __cordl_internal_set_placeSoundPitchVariance)) float_t placeSoundPitchVariance;

  __declspec(property(get = get_placedDimensions, put = set_placedDimensions))::UnityEngine::Vector3Int placedDimensions;

  __declspec(property(get = get_placedForwardFacing, put = set_placedForwardFacing))::GlobalNamespace::__MapObject__Facing placedForwardFacing;

  __declspec(property(get = get_placedPosition, put = set_placedPosition))::UnityEngine::Vector3Int placedPosition;

  __declspec(property(get = get_placedUpFacing, put = set_placedUpFacing))::GlobalNamespace::__MapObject__Facing placedUpFacing;

  __declspec(property(get = get_placementPending, put = set_placementPending)) bool placementPending;

  /// @brief Field restrictionData, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_restrictionData, put = __cordl_internal_set_restrictionData))::GlobalNamespace::MapObjectRestrictionData* restrictionData;

  /// @brief Field size, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size))::UnityEngine::Vector3Int size;

  /// @brief Method AllowsBatching, addr 0x307b740, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method CanBePainted, addr 0x307b7f0, size 0x13c, virtual true, abstract: false, final false
  inline bool CanBePainted(::StringW paintColorKey);

  /// @brief Method CanPickup, addr 0x307bc54, size 0xe0, virtual true, abstract: false, final false
  inline bool CanPickup();

  /// @brief Method CompleteSoftDestroy, addr 0x307d108, size 0x6c, virtual false, abstract: false, final false
  inline void CompleteSoftDestroy();

  /// @brief Method DestroySelf, addr 0x307c914, size 0x708, virtual false, abstract: false, final false
  inline void DestroySelf(::GlobalNamespace::__MapObject__DropType dropType, ::UnityEngine::Vector3 dropVelocity, bool wasDestroyedByMasterPlayer, bool isPickup, bool instant);

  /// @brief Method DestroySelfImmediate, addr 0x307d174, size 0x80, virtual false, abstract: false, final false
  inline void DestroySelfImmediate();

  /// @brief Method DoCollisionMessaging, addr 0x307d3cc, size 0x8, virtual true, abstract: false, final false
  inline bool DoCollisionMessaging();

  /// @brief Method DoScaleTransition, addr 0x3076d00, size 0x8c, virtual false, abstract: false, final false
  inline void DoScaleTransition(::UnityEngine::Vector3 targetScale, ::UnityEngine::AnimationCurve* curve, float_t duration, ::GlobalNamespace::__MapObject__OnTransitionComlete* onTransitionComlete);

  /// @brief Method DoScaleTransitionCoroutine, addr 0x307d2c8, size 0xac, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoScaleTransitionCoroutine(::UnityEngine::Vector3 targetScale, ::UnityEngine::AnimationCurve* curve, float_t duration,
                                                                        ::GlobalNamespace::__MapObject__OnTransitionComlete* onTransitionComlete);

  /// @brief Method DoesOverlap, addr 0x307d580, size 0x78, virtual false, abstract: false, final false
  inline bool DoesOverlap(::UnityEngine::Vector3Int otherPlacedPosition, ::UnityEngine::Vector3Int otherPlacedDimensions);

  /// @brief Method EndHover, addr 0x307be60, size 0x8c, virtual false, abstract: false, final false
  inline void EndHover(::GlobalNamespace::MapObjectHandInteractionExtender* hoveringHand);

  /// @brief Method ExtractSyncData, addr 0x307d39c, size 0x30, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MapObjectSyncData ExtractSyncData();

  /// @brief Method FacingFromWorldRotation, addr 0x307d84c, size 0x108, virtual false, abstract: false, final false
  static inline void FacingFromWorldRotation(::UnityEngine::Quaternion worldRotation, bool maintainUp, ByRef<::GlobalNamespace::__MapObject__Facing> forwardFacing,
                                             ByRef<::GlobalNamespace::__MapObject__Facing> upFacing);

  /// @brief Method GetClosestGridCenterWithin, addr 0x307c5d0, size 0x344, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestGridCenterWithin(::UnityEngine::Vector3 position);

  /// @brief Method GetColliderBatchKey, addr 0x307b7e0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetColliderBatchKey();

  /// @brief Method GetDimensions, addr 0x307ace4, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int GetDimensions(::UnityEngine::Vector3Int size, ::GlobalNamespace::__MapObject__Facing forwardFacing, ::GlobalNamespace::__MapObject__Facing upFacing);

  /// @brief Method GetDirectionFromFacing, addr 0x307dd3c, size 0x1f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetDirectionFromFacing(::GlobalNamespace::__MapObject__Facing facing);

  /// @brief Method GetEmissionLightLevel, addr 0x307b92c, size 0x58, virtual false, abstract: false, final false
  inline uint8_t GetEmissionLightLevel();

  /// @brief Method GetFacingFromDirection, addr 0x307da54, size 0x158, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__MapObject__Facing GetFacingFromDirection(::UnityEngine::Vector3 direction);

  /// @brief Method GetFacingFromDirection, addr 0x307dbac, size 0x190, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__MapObject__Facing GetFacingFromDirection(::UnityEngine::Vector3 direction, ::GlobalNamespace::__MapObject__Facing facingToIgnore);

  /// @brief Method GetFacingFromDirectionMaintingUp, addr 0x307d954, size 0x100, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__MapObject__Facing GetFacingFromDirectionMaintingUp(::UnityEngine::Vector3 direction);

  /// @brief Method GetFilterFromFacing, addr 0x307df84, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int GetFilterFromFacing(::GlobalNamespace::__MapObject__Facing facing);

  /// @brief Method GetSignalChannel, addr 0x307d570, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SignalChannel GetSignalChannel();

  /// @brief Method GetUniqueStatIdentifier, addr 0x307d5f8, size 0x254, virtual false, abstract: false, final false
  inline ::StringW GetUniqueStatIdentifier();

  /// @brief Method Initialize, addr 0x3075de0, size 0x4f4, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerAccountID, bool placementPending, bool instant);

  /// @brief Method IsOverlappingMasterPlayer, addr 0x307addc, size 0x2c8, virtual false, abstract: false, final false
  inline bool IsOverlappingMasterPlayer();

  /// @brief Method IsStuffed, addr 0x307bd34, size 0x54, virtual true, abstract: false, final false
  inline bool IsStuffed();

  /// @brief Method IsTriggeredInsteadOfDestroyedOnHit, addr 0x307bd88, size 0x8, virtual true, abstract: false, final false
  inline bool IsTriggeredInsteadOfDestroyedOnHit();

  /// @brief Method MakeVisualOnly, addr 0x307e654, size 0x4, virtual true, abstract: false, final false
  inline void MakeVisualOnly();

  static inline ::GlobalNamespace::MapObject* New_ctor();

  /// @brief Method OnBatchDeleted, addr 0x30741dc, size 0x8, virtual false, abstract: false, final false
  inline void OnBatchDeleted();

  /// @brief Method OnBatchIsBakedUpdated, addr 0x3073368, size 0x14, virtual false, abstract: false, final false
  inline void OnBatchIsBakedUpdated(bool newIsBaked);

  /// @brief Method OnColliderBatchDeleted, addr 0x307b7d8, size 0x8, virtual false, abstract: false, final false
  inline void OnColliderBatchDeleted();

  /// @brief Method OnColliderBatchIsBakedUpdated, addr 0x307b748, size 0x90, virtual true, abstract: false, final false
  inline void OnColliderBatchIsBakedUpdated(bool newIsBaked);

  /// @brief Method OnDrawGizmosSelectedAdditions, addr 0x307d57c, size 0x4, virtual true, abstract: false, final false
  inline void OnDrawGizmosSelectedAdditions();

  /// @brief Method OnHit, addr 0x307bb90, size 0x5c, virtual true, abstract: false, final false
  inline bool OnHit();

  /// @brief Method OnHit, addr 0x307bbec, size 0xc, virtual true, abstract: false, final false
  inline bool OnHit(::UnityEngine::Vector3 dropVelocity);

  /// @brief Method OnHitAndCollect, addr 0x307bbf8, size 0x5c, virtual true, abstract: false, final false
  inline bool OnHitAndCollect();

  /// @brief Method OnMasterPlayerCollided, addr 0x307d3d4, size 0x198, virtual true, abstract: false, final false
  inline void OnMasterPlayerCollided(::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnNoLongerOverlappingMasterPlayer, addr 0x307b9ac, size 0x13c, virtual false, abstract: false, final false
  inline void OnNoLongerOverlappingMasterPlayer();

  /// @brief Method OnPendingPlacementComplete, addr 0x307bb2c, size 0x8, virtual false, abstract: false, final false
  inline void OnPendingPlacementComplete();

  /// @brief Method OnPickedUp, addr 0x307beec, size 0x6e4, virtual true, abstract: false, final false
  inline void OnPickedUp(bool right);

  /// @brief Method OnPlacementInvalidated, addr 0x307bb34, size 0x5c, virtual false, abstract: false, final false
  inline void OnPlacementInvalidated();

  /// @brief Method OnPlacementPendingUpdate, addr 0x307bae8, size 0x44, virtual false, abstract: false, final false
  inline bool OnPlacementPendingUpdate();

  /// @brief Method OnReceiveChangeColor, addr 0x307b55c, size 0x1e4, virtual true, abstract: false, final false
  inline void OnReceiveChangeColor(::StringW newColorKey);

  /// @brief Method OnReceivePlayerCollided, addr 0x307d56c, size 0x4, virtual true, abstract: false, final false
  inline void OnReceivePlayerCollided(::StringW userID, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3078168, size 0x4, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method OnRestrictionExceded, addr 0x30759dc, size 0x5c, virtual false, abstract: false, final false
  inline void OnRestrictionExceded();

  /// @brief Method OnSignal, addr 0x307d578, size 0x4, virtual true, abstract: false, final false
  inline void OnSignal(::StringW payload);

  /// @brief Method PrepareForDestroy, addr 0x3079a24, size 0x100, virtual true, abstract: false, final false
  inline void PrepareForDestroy();

  /// @brief Method ProcessSharedMaterials, addr 0x307b7e8, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
  ProcessSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newSharedMats);

  /// @brief Method RefreshMaterials, addr 0x3076aa0, size 0x1c8, virtual false, abstract: false, final false
  inline void RefreshMaterials();

  /// @brief Method RotateFacingAroundY, addr 0x307e0bc, size 0x128, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__MapObject__Facing RotateFacingAroundY(::GlobalNamespace::__MapObject__Facing facing, bool clockwise);

  /// @brief Method SendChangeColor, addr 0x307b3a8, size 0x1b4, virtual false, abstract: false, final false
  inline void SendChangeColor(::StringW newColorKey);

  /// @brief Method SendDestroySelf, addr 0x3076c68, size 0x98, virtual false, abstract: false, final false
  inline bool SendDestroySelf(::GlobalNamespace::__MapObject__DropType dropType, ::UnityEngine::Vector3 dropVelocity, bool isPickup);

  /// @brief Method SendSimpleCustomMessage, addr 0x3076438, size 0x100, virtual false, abstract: false, final false
  inline void SendSimpleCustomMessage(::StringW payload);

  /// @brief Method SetCollidersActive, addr 0x307b0a4, size 0x124, virtual false, abstract: false, final false
  inline void SetCollidersActive(bool active);

  /// @brief Method SetRenderersActive, addr 0x3078688, size 0x12c, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x3078464, size 0x12c, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  /// @brief Method StartHover, addr 0x307bd90, size 0xd0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> StartHover(::GlobalNamespace::MapObjectHandInteractionExtender* hoveringHand);

  /// @brief Method StartSoftDestroy, addr 0x307d0d8, size 0x30, virtual false, abstract: false, final false
  inline void StartSoftDestroy();

  /// @brief Method TryBecomeSolidRoutine, addr 0x307b1c8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TryBecomeSolidRoutine();

  /// @brief Method TryCancelScaleTransition, addr 0x3076a7c, size 0x24, virtual false, abstract: false, final false
  inline void TryCancelScaleTransition();

  /// @brief Method TryCreateVisualOnlyDuplicate, addr 0x307e1e4, size 0x470, virtual false, abstract: false, final false
  static inline bool TryCreateVisualOnlyDuplicate(::UnityEngine::GameObject* mapObjectGO, ::UnityEngine::Transform* container,
                                                  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials, ByRef<::UnityEngine::GameObject*> visualOnlyDuplicate);

  /// @brief Method WorldRotationFromFacing, addr 0x307df30, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion WorldRotationFromFacing(::GlobalNamespace::__MapObject__Facing forwardFacing, ::GlobalNamespace::__MapObject__Facing upFacing);

  /// @brief Method <DestroySelf>b__104_0, addr 0x307e658, size 0x6c, virtual false, abstract: false, final false
  inline void _DestroySelf_b__104_0();

  constexpr ::StringW const& __cordl_internal_get__colorKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__colorKey_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDephysicalized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDephysicalized_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__materials_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__materials_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ownerAccountID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ownerAccountID_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__placedDimensions_k__BackingField() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__placedDimensions_k__BackingField();

  constexpr ::GlobalNamespace::__MapObject__Facing const& __cordl_internal_get__placedForwardFacing_k__BackingField() const;

  constexpr ::GlobalNamespace::__MapObject__Facing& __cordl_internal_get__placedForwardFacing_k__BackingField();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get__placedPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get__placedPosition_k__BackingField();

  constexpr ::GlobalNamespace::__MapObject__Facing const& __cordl_internal_get__placedUpFacing_k__BackingField() const;

  constexpr ::GlobalNamespace::__MapObject__Facing& __cordl_internal_get__placedUpFacing_k__BackingField();

  constexpr bool const& __cordl_internal_get__placementPending_k__BackingField() const;

  constexpr bool& __cordl_internal_get__placementPending_k__BackingField();

  constexpr ::GlobalNamespace::MapObjectBatch*& __cordl_internal_get_batch();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapObjectBatch*> const& __cordl_internal_get_batch() const;

  constexpr bool const& __cordl_internal_get_blocksLight() const;

  constexpr bool& __cordl_internal_get_blocksLight();

  constexpr ::StringW const& __cordl_internal_get_breakSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_breakSoundKey();

  constexpr ::GlobalNamespace::ColliderBatch*& __cordl_internal_get_colliderBatch();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColliderBatch*> const& __cordl_internal_get_colliderBatch() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_colliders() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get_colliders();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curScaleTransitionCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curScaleTransitionCoroutine() const;

  constexpr float_t const& __cordl_internal_get_distanceToPlayerHeadToIgnoreDephysicalize() const;

  constexpr float_t& __cordl_internal_get_distanceToPlayerHeadToIgnoreDephysicalize();

  constexpr ::StringW const& __cordl_internal_get_footstepSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_footstepSoundKey();

  constexpr ::GlobalNamespace::__MapObject__ForcePickupState const& __cordl_internal_get_forcePickupState() const;

  constexpr ::GlobalNamespace::__MapObject__ForcePickupState& __cordl_internal_get_forcePickupState();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectHandInteractionExtender>>*& __cordl_internal_get_hoveringHands();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectHandInteractionExtender>>*> const&
  __cordl_internal_get_hoveringHands() const;

  constexpr bool const& __cordl_internal_get_maintainUp() const;

  constexpr bool& __cordl_internal_get_maintainUp();

  constexpr float_t const& __cordl_internal_get_pendingTimer() const;

  constexpr float_t& __cordl_internal_get_pendingTimer();

  constexpr ::StringW const& __cordl_internal_get_pickupSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_pickupSoundKey();

  constexpr ::StringW const& __cordl_internal_get_placeSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_placeSoundKey();

  constexpr float_t const& __cordl_internal_get_placeSoundPitchVariance() const;

  constexpr float_t& __cordl_internal_get_placeSoundPitchVariance();

  constexpr ::GlobalNamespace::MapObjectRestrictionData*& __cordl_internal_get_restrictionData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapObjectRestrictionData*> const& __cordl_internal_get_restrictionData() const;

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_size();

  constexpr void __cordl_internal_set__colorKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__isDephysicalized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__materials_k__BackingField(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__ownerAccountID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__placedDimensions_k__BackingField(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set__placedForwardFacing_k__BackingField(::GlobalNamespace::__MapObject__Facing value);

  constexpr void __cordl_internal_set__placedPosition_k__BackingField(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set__placedUpFacing_k__BackingField(::GlobalNamespace::__MapObject__Facing value);

  constexpr void __cordl_internal_set__placementPending_k__BackingField(bool value);

  constexpr void __cordl_internal_set_batch(::GlobalNamespace::MapObjectBatch* value);

  constexpr void __cordl_internal_set_blocksLight(bool value);

  constexpr void __cordl_internal_set_breakSoundKey(::StringW value);

  constexpr void __cordl_internal_set_colliderBatch(::GlobalNamespace::ColliderBatch* value);

  constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set_curScaleTransitionCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_distanceToPlayerHeadToIgnoreDephysicalize(float_t value);

  constexpr void __cordl_internal_set_footstepSoundKey(::StringW value);

  constexpr void __cordl_internal_set_forcePickupState(::GlobalNamespace::__MapObject__ForcePickupState value);

  constexpr void __cordl_internal_set_hoveringHands(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectHandInteractionExtender>>* value);

  constexpr void __cordl_internal_set_maintainUp(bool value);

  constexpr void __cordl_internal_set_pendingTimer(float_t value);

  constexpr void __cordl_internal_set_pickupSoundKey(::StringW value);

  constexpr void __cordl_internal_set_placeSoundKey(::StringW value);

  constexpr void __cordl_internal_set_placeSoundPitchVariance(float_t value);

  constexpr void __cordl_internal_set_restrictionData(::GlobalNamespace::MapObjectRestrictionData* value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector3Int value);

  /// @brief Method .ctor, addr 0x3077180, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorKey, addr 0x307ac8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_colorKey();

  /// @brief Method get_isDephysicalized, addr 0x307acc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDephysicalized();

  /// @brief Method get_isScaling, addr 0x307d2b8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isScaling();

  /// @brief Method get_key, addr 0x307ac24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_materials, addr 0x307acd4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_materials();

  /// @brief Method get_ownerAccountID, addr 0x307ac9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ownerAccountID();

  /// @brief Method get_placedDimensions, addr 0x307ac34, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_placedDimensions();

  /// @brief Method get_placedForwardFacing, addr 0x307ac6c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapObject__Facing get_placedForwardFacing();

  /// @brief Method get_placedPosition, addr 0x307ac50, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int get_placedPosition();

  /// @brief Method get_placedUpFacing, addr 0x307ac7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MapObject__Facing get_placedUpFacing();

  /// @brief Method get_placementPending, addr 0x307acac, size 0x8, virtual false, abstract: false, final false
  inline bool get_placementPending();

  /// @brief Method set_colorKey, addr 0x307ac94, size 0x8, virtual false, abstract: false, final false
  inline void set_colorKey(::StringW value);

  /// @brief Method set_isDephysicalized, addr 0x307acc8, size 0xc, virtual false, abstract: false, final false
  inline void set_isDephysicalized(bool value);

  /// @brief Method set_key, addr 0x307ac2c, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_materials, addr 0x307acdc, size 0x8, virtual false, abstract: false, final false
  inline void set_materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_ownerAccountID, addr 0x307aca4, size 0x8, virtual false, abstract: false, final false
  inline void set_ownerAccountID(::StringW value);

  /// @brief Method set_placedDimensions, addr 0x307ac44, size 0xc, virtual false, abstract: false, final false
  inline void set_placedDimensions(::UnityEngine::Vector3Int value);

  /// @brief Method set_placedForwardFacing, addr 0x307ac74, size 0x8, virtual false, abstract: false, final false
  inline void set_placedForwardFacing(::GlobalNamespace::__MapObject__Facing value);

  /// @brief Method set_placedPosition, addr 0x307ac60, size 0xc, virtual false, abstract: false, final false
  inline void set_placedPosition(::UnityEngine::Vector3Int value);

  /// @brief Method set_placedUpFacing, addr 0x307ac84, size 0x8, virtual false, abstract: false, final false
  inline void set_placedUpFacing(::GlobalNamespace::__MapObject__Facing value);

  /// @brief Method set_placementPending, addr 0x307acb4, size 0xc, virtual false, abstract: false, final false
  inline void set_placementPending(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObject(MapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObject(MapObject const&) = delete;

  /// @brief Field size, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___size;

  /// @brief Field maintainUp, offset: 0x24, size: 0x1, def value: None
  bool ___maintainUp;

  /// @brief Field blocksLight, offset: 0x25, size: 0x1, def value: None
  bool ___blocksLight;

  /// @brief Field <key>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <placedDimensions>k__BackingField, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ____placedDimensions_k__BackingField;

  /// @brief Field <placedPosition>k__BackingField, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ____placedPosition_k__BackingField;

  /// @brief Field <placedForwardFacing>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__MapObject__Facing ____placedForwardFacing_k__BackingField;

  /// @brief Field <placedUpFacing>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__MapObject__Facing ____placedUpFacing_k__BackingField;

  /// @brief Field <colorKey>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____colorKey_k__BackingField;

  /// @brief Field <ownerAccountID>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____ownerAccountID_k__BackingField;

  /// @brief Field forcePickupState, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__MapObject__ForcePickupState ___forcePickupState;

  /// @brief Field placeSoundKey, offset: 0x68, size: 0x8, def value: None
  ::StringW ___placeSoundKey;

  /// @brief Field placeSoundPitchVariance, offset: 0x70, size: 0x4, def value: None
  float_t ___placeSoundPitchVariance;

  /// @brief Field pickupSoundKey, offset: 0x78, size: 0x8, def value: None
  ::StringW ___pickupSoundKey;

  /// @brief Field breakSoundKey, offset: 0x80, size: 0x8, def value: None
  ::StringW ___breakSoundKey;

  /// @brief Field footstepSoundKey, offset: 0x88, size: 0x8, def value: None
  ::StringW ___footstepSoundKey;

  /// @brief Field <placementPending>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____placementPending_k__BackingField;

  /// @brief Field pendingTimer, offset: 0x94, size: 0x4, def value: None
  float_t ___pendingTimer;

  /// @brief Field restrictionData, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MapObjectRestrictionData* ___restrictionData;

  /// @brief Field distanceToPlayerHeadToIgnoreDephysicalize, offset: 0xa0, size: 0x4, def value: None
  float_t ___distanceToPlayerHeadToIgnoreDephysicalize;

  /// @brief Field <isDephysicalized>k__BackingField, offset: 0xa4, size: 0x1, def value: None
  bool ____isDephysicalized_k__BackingField;

  /// @brief Field batch, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MapObjectBatch* ___batch;

  /// @brief Field colliderBatch, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::ColliderBatch* ___colliderBatch;

  /// @brief Field colliders, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ___colliders;

  /// @brief Field <materials>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____materials_k__BackingField;

  /// @brief Field hoveringHands, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObjectHandInteractionExtender>>* ___hoveringHands;

  /// @brief Field curScaleTransitionCoroutine, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curScaleTransitionCoroutine;

  /// @brief Field DEFAULT_PLACE_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_PLACE_SOUND_KEY{ u"placeDefault" };

  /// @brief Field brightnessBoostProppertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString brightnessBoostProppertyName{ u"_BrightnessBoost" };

  /// @brief Field dephysicalizedSizePadding offset 0xffffffff size 0x4
  static constexpr float_t dephysicalizedSizePadding{ 0.01 };

  /// @brief Field destructableTag offset 0xffffffff size 0x8
  static constexpr ::ConstString destructableTag{ u"Destructable" };

  /// @brief Field groundLayer offset 0xffffffff size 0x4
  static constexpr int32_t groundLayer{ static_cast<int32_t>(0x3) };

  /// @brief Field groundPassthroughLayer offset 0xffffffff size 0x4
  static constexpr int32_t groundPassthroughLayer{ static_cast<int32_t>(0xd) };

  /// @brief Field hoveredToPickupBrightnessBoost offset 0xffffffff size 0x4
  static constexpr float_t hoveredToPickupBrightnessBoost{ 0.125 };

  /// @brief Field mapObjectItemKey offset 0xffffffff size 0x8
  static constexpr ::ConstString mapObjectItemKey{ u"mapObject" };

  /// @brief Field materialTypeCount offset 0xffffffff size 0x4
  static constexpr int32_t materialTypeCount{ static_cast<int32_t>(0x4) };

  /// @brief Field overlapTolerance offset 0xffffffff size 0x4
  static constexpr float_t overlapTolerance{ 0.01 };

  /// @brief Field pendingDuration offset 0xffffffff size 0x4
  static constexpr float_t pendingDuration{ 0.3 };

  /// @brief Field timeBetweenDephysicalizeChecks offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenDephysicalizeChecks{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObject, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___maintainUp) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___blocksLight) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____key_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____placedDimensions_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____placedPosition_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____placedForwardFacing_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____placedUpFacing_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____colorKey_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____ownerAccountID_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___forcePickupState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___placeSoundKey) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___placeSoundPitchVariance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___pickupSoundKey) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___breakSoundKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___footstepSoundKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____placementPending_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___pendingTimer) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___restrictionData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___distanceToPlayerHeadToIgnoreDephysicalize) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____isDephysicalized_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___batch) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___colliderBatch) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___colliders) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ____materials_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___hoveringHands) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObject, ___curScaleTransitionCoroutine) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject__DropType, "", "MapObject/DropType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject__Facing, "", "MapObject/Facing");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject__ForcePickupState, "", "MapObject/ForcePickupState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject__MaterialType, "", "MapObject/MaterialType");
NEED_NO_BOX(::GlobalNamespace::MapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObject*, "", "MapObject");
NEED_NO_BOX(::GlobalNamespace::__MapObject__OnTransitionComlete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject__OnTransitionComlete*, "", "MapObject/OnTransitionComlete");
NEED_NO_BOX(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject___DoScaleTransitionCoroutine_d__116*, "", "MapObject/<DoScaleTransitionCoroutine>d__116");
NEED_NO_BOX(::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObject___TryBecomeSolidRoutine_d__85*, "", "MapObject/<TryBecomeSolidRoutine>d__85");
