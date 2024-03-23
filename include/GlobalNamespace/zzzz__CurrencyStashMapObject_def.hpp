#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CurrencyStashMapObject_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CurrencyStashMapObject)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
struct __CurrencyStashMapObject__CompartmentData;
}
namespace GlobalNamespace {
class __CurrencyStashMapObject___OpenCompartmentRoutine_d__19;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
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
class CurrencyStashMapObject;
}
namespace GlobalNamespace {
class __CurrencyStashMapObject___OpenCompartmentRoutine_d__19;
}
namespace GlobalNamespace {
struct __CurrencyStashMapObject__CompartmentData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CurrencyStashMapObject);
MARK_REF_PTR_T(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19);
MARK_VAL_T(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData);
// Type: ::CompartmentData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CurrencyStashMapObject::CompartmentData
struct CORDL_TYPE __CurrencyStashMapObject__CompartmentData {
public:
  // Declarations
  /// @brief Method GetInitialState, addr 0x3077708, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetInitialState();

  /// @brief Method GetWorldDispensePoint, addr 0x30787b4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetWorldDispensePoint();

  /// @brief Method SetOpenness, addr 0x3078260, size 0x108, virtual false, abstract: false, final false
  inline void SetOpenness(::UnityEngine::Vector3 initialTransformation, float_t openness);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CurrencyStashMapObject__CompartmentData();

  // Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "meshRenderer", ty:
  // "::UnityW<::UnityEngine::MeshRenderer>", modifiers: "", def_value: None }, CppParam { name: "localDispensePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "isRotationAnimation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "finalTransformation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "openTimeDelay", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __CurrencyStashMapObject__CompartmentData(::UnityW<::UnityEngine::Transform> transform, ::UnityW<::UnityEngine::MeshRenderer> meshRenderer, ::UnityEngine::Vector3 localDispensePoint,
                                                      bool isRotationAnimation, ::UnityEngine::Vector3 finalTransformation, float_t openTimeDelay) noexcept;

  /// @brief Field transform, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field meshRenderer, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> meshRenderer;

  /// @brief Field localDispensePoint, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 localDispensePoint;

  /// @brief Field isRotationAnimation, offset: 0x1c, size: 0x1, def value: None
  bool isRotationAnimation;

  /// @brief Field finalTransformation, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 finalTransformation;

  /// @brief Field openTimeDelay, offset: 0x2c, size: 0x4, def value: None
  float_t openTimeDelay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, meshRenderer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, localDispensePoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, isRotationAnimation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, finalTransformation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, openTimeDelay) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<OpenCompartmentRoutine>d__19
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CurrencyStashMapObject::<OpenCompartmentRoutine>d__19*
class CORDL_TYPE __CurrencyStashMapObject___OpenCompartmentRoutine_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::CurrencyStashMapObject> __4__this;

  /// @brief Field <p>5__2, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__2, put = __cordl_internal_set__p_5__2)) float_t _p_5__2;

  /// @brief Field compartment, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_compartment, put = __cordl_internal_set_compartment))::GlobalNamespace::__CurrencyStashMapObject__CompartmentData compartment;

  /// @brief Field currencyAmount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_currencyAmount, put = __cordl_internal_set_currencyAmount)) int32_t currencyAmount;

  /// @brief Field initialTransformation, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_initialTransformation, put = __cordl_internal_set_initialTransformation))::UnityEngine::Vector3 initialTransformation;

  /// @brief Field isMaster, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isMaster, put = __cordl_internal_set_isMaster)) bool isMaster;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x30787e0, size 0x17c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x307895c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3078964, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x30789a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x30787dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyStashMapObject> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyStashMapObject>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__2() const;

  constexpr float_t& __cordl_internal_get__p_5__2();

  constexpr ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData const& __cordl_internal_get_compartment() const;

  constexpr ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData& __cordl_internal_get_compartment();

  constexpr int32_t const& __cordl_internal_get_currencyAmount() const;

  constexpr int32_t& __cordl_internal_get_currencyAmount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialTransformation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialTransformation();

  constexpr bool const& __cordl_internal_get_isMaster() const;

  constexpr bool& __cordl_internal_get_isMaster();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CurrencyStashMapObject> value);

  constexpr void __cordl_internal_set__p_5__2(float_t value);

  constexpr void __cordl_internal_set_compartment(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData value);

  constexpr void __cordl_internal_set_currencyAmount(int32_t value);

  constexpr void __cordl_internal_set_initialTransformation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_isMaster(bool value);

  /// @brief Method .ctor, addr 0x3078238, size 0x28, virtual false, abstract: false, final false
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
  constexpr __CurrencyStashMapObject___OpenCompartmentRoutine_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CurrencyStashMapObject___OpenCompartmentRoutine_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CurrencyStashMapObject___OpenCompartmentRoutine_d__19(__CurrencyStashMapObject___OpenCompartmentRoutine_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CurrencyStashMapObject___OpenCompartmentRoutine_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CurrencyStashMapObject___OpenCompartmentRoutine_d__19(__CurrencyStashMapObject___OpenCompartmentRoutine_d__19 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field compartment, offset: 0x20, size: 0x30, def value: None
  ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData ___compartment;

  /// @brief Field isMaster, offset: 0x50, size: 0x1, def value: None
  bool ___isMaster;

  /// @brief Field currencyAmount, offset: 0x54, size: 0x4, def value: None
  int32_t ___currencyAmount;

  /// @brief Field <>4__this, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyStashMapObject> _____4__this;

  /// @brief Field initialTransformation, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___initialTransformation;

  /// @brief Field <p>5__2, offset: 0x6c, size: 0x4, def value: None
  float_t ____p_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, ___compartment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, ___isMaster) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, ___currencyAmount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, _____4__this) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, ___initialTransformation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19, ____p_5__2) == 0x6c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CurrencyStashMapObject
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 266, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CurrencyStashMapObject*
class CORDL_TYPE CurrencyStashMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using CompartmentData = ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData;

  using _OpenCompartmentRoutine_d__19 = ::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19;

  /// @brief Field compartmentOpenDuration, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_compartmentOpenDuration, put = __cordl_internal_set_compartmentOpenDuration)) float_t compartmentOpenDuration;

  /// @brief Field compartments, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_compartments, put = __cordl_internal_set_compartments))::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData,
                                                                                                                 ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*> compartments;

  /// @brief Field initialTransformations, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_initialTransformations,
                      put = __cordl_internal_set_initialTransformations))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> initialTransformations;

  /// @brief Field isRedeemable, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_isRedeemable, put = __cordl_internal_set_isRedeemable)) bool isRedeemable;

  /// @brief Field isTryingToRedeem, offset 0x109, size 0x1
  __declspec(property(get = __cordl_internal_get_isTryingToRedeem, put = __cordl_internal_set_isTryingToRedeem)) bool isTryingToRedeem;

  /// @brief Field redeemButton, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_redeemButton, put = __cordl_internal_set_redeemButton))::UnityW<::GlobalNamespace::SimpleButtonController> redeemButton;

  /// @brief Field redeemButtonMR, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_redeemButtonMR, put = __cordl_internal_set_redeemButtonMR))::UnityW<::UnityEngine::MeshRenderer> redeemButtonMR;

  /// @brief Field stashKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_stashKey, put = __cordl_internal_set_stashKey))::StringW stashKey;

  /// @brief Method AllowsBatching, addr 0x3078368, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method Initialize, addr 0x307755c, size 0x1ac, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerAccountID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::CurrencyStashMapObject* New_ctor();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3078000, size 0x168, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method OnRedeemButtonPressed, addr 0x30778a4, size 0x190, virtual false, abstract: false, final false
  inline void OnRedeemButtonPressed();

  /// @brief Method OnRedeemFailure, addr 0x3078230, size 0x8, virtual false, abstract: false, final false
  inline void OnRedeemFailure();

  /// @brief Method OnRedeemSuccess, addr 0x3077a34, size 0x21c, virtual false, abstract: false, final false
  inline void OnRedeemSuccess(int32_t currencyAmount, ::StringW stashID);

  /// @brief Method OpenCompartmentRoutine, addr 0x307816c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* OpenCompartmentRoutine(::UnityEngine::Vector3 initialTransformation, ::GlobalNamespace::__CurrencyStashMapObject__CompartmentData compartment,
                                                                    int32_t currencyAmount, bool isMaster);

  /// @brief Method OpenStash, addr 0x3077c50, size 0x3b0, virtual false, abstract: false, final false
  inline void OpenStash(int32_t currencyAmount, bool isMaster);

  /// @brief Method SetAllCompartmentOpeness, addr 0x3077800, size 0xa4, virtual false, abstract: false, final false
  inline void SetAllCompartmentOpeness(float_t target);

  /// @brief Method SetIsRedeemable, addr 0x30777d4, size 0x2c, virtual false, abstract: false, final false
  inline void SetIsRedeemable(bool newIsRedeemable);

  /// @brief Method SetRenderersActive, addr 0x3078590, size 0xf8, virtual true, abstract: false, final false
  inline void SetRenderersActive(bool newActive);

  /// @brief Method SetSharedMaterials, addr 0x3078370, size 0xf4, virtual true, abstract: false, final false
  inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials);

  constexpr float_t const& __cordl_internal_get_compartmentOpenDuration() const;

  constexpr float_t& __cordl_internal_get_compartmentOpenDuration();

  constexpr ::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*> const&
  __cordl_internal_get_compartments() const;

  constexpr ::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*>& __cordl_internal_get_compartments();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_initialTransformations() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_initialTransformations();

  constexpr bool const& __cordl_internal_get_isRedeemable() const;

  constexpr bool& __cordl_internal_get_isRedeemable();

  constexpr bool const& __cordl_internal_get_isTryingToRedeem() const;

  constexpr bool& __cordl_internal_get_isTryingToRedeem();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_redeemButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_redeemButton();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_redeemButtonMR() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_redeemButtonMR();

  constexpr ::StringW const& __cordl_internal_get_stashKey() const;

  constexpr ::StringW& __cordl_internal_get_stashKey();

  constexpr void __cordl_internal_set_compartmentOpenDuration(float_t value);

  constexpr void
  __cordl_internal_set_compartments(::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*> value);

  constexpr void __cordl_internal_set_initialTransformations(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_isRedeemable(bool value);

  constexpr void __cordl_internal_set_isTryingToRedeem(bool value);

  constexpr void __cordl_internal_set_redeemButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_redeemButtonMR(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_stashKey(::StringW value);

  /// @brief Method .ctor, addr 0x3077550, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrencyStashMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurrencyStashMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrencyStashMapObject(CurrencyStashMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrencyStashMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrencyStashMapObject(CurrencyStashMapObject const&) = delete;

  /// @brief Field stashKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___stashKey;

  /// @brief Field compartments, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, ::Array<::GlobalNamespace::__CurrencyStashMapObject__CompartmentData>*> ___compartments;

  /// @brief Field initialTransformations, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___initialTransformations;

  /// @brief Field compartmentOpenDuration, offset: 0xf0, size: 0x4, def value: None
  float_t ___compartmentOpenDuration;

  /// @brief Field redeemButton, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___redeemButton;

  /// @brief Field redeemButtonMR, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___redeemButtonMR;

  /// @brief Field isRedeemable, offset: 0x108, size: 0x1, def value: None
  bool ___isRedeemable;

  /// @brief Field isTryingToRedeem, offset: 0x109, size: 0x1, def value: None
  bool ___isTryingToRedeem;

  /// @brief Field SEPARATOR_CHAR offset 0xffffffff size 0x2
  static constexpr char16_t SEPARATOR_CHAR{ u'~' };

  /// @brief Field openSoundKey offset 0xffffffff size 0x8
  static constexpr ::ConstString openSoundKey{ u"currencyStashOpen" };

  /// @brief Field redeemSoundKey offset 0xffffffff size 0x8
  static constexpr ::ConstString redeemSoundKey{ u"currencyStashRedeem" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CurrencyStashMapObject, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___stashKey) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___compartments) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___initialTransformations) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___compartmentOpenDuration) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___redeemButton) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___redeemButtonMR) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___isRedeemable) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurrencyStashMapObject, ___isTryingToRedeem) == 0x109, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CurrencyStashMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CurrencyStashMapObject*, "", "CurrencyStashMapObject");
NEED_NO_BOX(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CurrencyStashMapObject___OpenCompartmentRoutine_d__19*, "", "CurrencyStashMapObject/<OpenCompartmentRoutine>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CurrencyStashMapObject__CompartmentData, "", "CurrencyStashMapObject/CompartmentData");
