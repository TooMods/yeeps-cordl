#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DetectorMapObject)
namespace GlobalNamespace {
class __DetectorMapObject___DestroySelfOnDelay_d__24;
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
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class DetectorMapObject;
}
namespace GlobalNamespace {
class __DetectorMapObject___DestroySelfOnDelay_d__24;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DetectorMapObject);
MARK_REF_PTR_T(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24);
// Type: ::<DestroySelfOnDelay>d__24
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DetectorMapObject::<DestroySelfOnDelay>d__24*
class CORDL_TYPE __DetectorMapObject___DestroySelfOnDelay_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::DetectorMapObject> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x30795d0, size 0xf0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x30796c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x30796c8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3079708, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x30795cc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::DetectorMapObject> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DetectorMapObject>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DetectorMapObject> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x30795a0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __DetectorMapObject___DestroySelfOnDelay_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DetectorMapObject___DestroySelfOnDelay_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DetectorMapObject___DestroySelfOnDelay_d__24(__DetectorMapObject___DestroySelfOnDelay_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DetectorMapObject___DestroySelfOnDelay_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DetectorMapObject___DestroySelfOnDelay_d__24(__DetectorMapObject___DestroySelfOnDelay_d__24 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DetectorMapObject> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DetectorMapObject
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 257, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DetectorMapObject*
class CORDL_TYPE DetectorMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using _DestroySelfOnDelay_d__24 = ::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24;

  /// @brief Field detectedPlayerType, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_detectedPlayerType, put = __cordl_internal_set_detectedPlayerType))::GlobalNamespace::__Player__Type detectedPlayerType;

  /// @brief Field detectionCount, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_detectionCount, put = __cordl_internal_set_detectionCount)) int32_t detectionCount;

  /// @brief Field inDetectionPulse, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_inDetectionPulse, put = __cordl_internal_set_inDetectionPulse)) bool inDetectionPulse;

  /// @brief Field isUsingPulseMat, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_isUsingPulseMat, put = __cordl_internal_set_isUsingPulseMat)) bool isUsingPulseMat;

  /// @brief Field lastDetectTime, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_lastDetectTime, put = __cordl_internal_set_lastDetectTime)) float_t lastDetectTime;

  /// @brief Field nextCheckTime, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_nextCheckTime, put = __cordl_internal_set_nextCheckTime)) float_t nextCheckTime;

  /// @brief Field pulseMat, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_pulseMat, put = __cordl_internal_set_pulseMat))::UnityW<::UnityEngine::Material> pulseMat;

  /// @brief Field radius, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field timeBetweenChecks, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_timeBetweenChecks, put = __cordl_internal_set_timeBetweenChecks)) float_t timeBetweenChecks;

  /// @brief Method DestroySelfOnDelay, addr 0x3079528, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DestroySelfOnDelay(float_t delay);

  /// @brief Method DisablePulsing, addr 0x3079044, size 0x14, virtual false, abstract: false, final false
  inline void DisablePulsing();

  /// @brief Method EnablePulsing, addr 0x3079200, size 0x18, virtual false, abstract: false, final false
  inline void EnablePulsing();

  /// @brief Method Initialize, addr 0x3078c4c, size 0x54, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::DetectorMapObject* New_ctor();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3079218, size 0x310, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method ProcessSharedMaterials, addr 0x3079058, size 0x1a8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
  ProcessSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newSharedMats);

  /// @brief Method SetPulseBrightness, addr 0x3078f78, size 0xcc, virtual false, abstract: false, final false
  inline void SetPulseBrightness(float_t brightness);

  /// @brief Method Update, addr 0x3078ca0, size 0x2d8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__Player__Type const& __cordl_internal_get_detectedPlayerType() const;

  constexpr ::GlobalNamespace::__Player__Type& __cordl_internal_get_detectedPlayerType();

  constexpr int32_t const& __cordl_internal_get_detectionCount() const;

  constexpr int32_t& __cordl_internal_get_detectionCount();

  constexpr bool const& __cordl_internal_get_inDetectionPulse() const;

  constexpr bool& __cordl_internal_get_inDetectionPulse();

  constexpr bool const& __cordl_internal_get_isUsingPulseMat() const;

  constexpr bool& __cordl_internal_get_isUsingPulseMat();

  constexpr float_t const& __cordl_internal_get_lastDetectTime() const;

  constexpr float_t& __cordl_internal_get_lastDetectTime();

  constexpr float_t const& __cordl_internal_get_nextCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextCheckTime();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pulseMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pulseMat();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr float_t const& __cordl_internal_get_timeBetweenChecks() const;

  constexpr float_t& __cordl_internal_get_timeBetweenChecks();

  constexpr void __cordl_internal_set_detectedPlayerType(::GlobalNamespace::__Player__Type value);

  constexpr void __cordl_internal_set_detectionCount(int32_t value);

  constexpr void __cordl_internal_set_inDetectionPulse(bool value);

  constexpr void __cordl_internal_set_isUsingPulseMat(bool value);

  constexpr void __cordl_internal_set_lastDetectTime(float_t value);

  constexpr void __cordl_internal_set_nextCheckTime(float_t value);

  constexpr void __cordl_internal_set_pulseMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_timeBetweenChecks(float_t value);

  /// @brief Method .ctor, addr 0x30795c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetectorMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetectorMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetectorMapObject(DetectorMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetectorMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetectorMapObject(DetectorMapObject const&) = delete;

  /// @brief Field detectedPlayerType, offset: 0xd8, size: 0x4, def value: None
  ::GlobalNamespace::__Player__Type ___detectedPlayerType;

  /// @brief Field radius, offset: 0xdc, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field timeBetweenChecks, offset: 0xe0, size: 0x4, def value: None
  float_t ___timeBetweenChecks;

  /// @brief Field nextCheckTime, offset: 0xe4, size: 0x4, def value: None
  float_t ___nextCheckTime;

  /// @brief Field lastDetectTime, offset: 0xe8, size: 0x4, def value: None
  float_t ___lastDetectTime;

  /// @brief Field detectionCount, offset: 0xec, size: 0x4, def value: None
  int32_t ___detectionCount;

  /// @brief Field inDetectionPulse, offset: 0xf0, size: 0x1, def value: None
  bool ___inDetectionPulse;

  /// @brief Field pulseMat, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___pulseMat;

  /// @brief Field isUsingPulseMat, offset: 0x100, size: 0x1, def value: None
  bool ___isUsingPulseMat;

  /// @brief Field detectHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t detectHapticAmplitude{ 0.3 };

  /// @brief Field detectHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t detectHapticDuration{ 0.2 };

  /// @brief Field detectionPulseMaxEmissionMultiplier offset 0xffffffff size 0x4
  static constexpr float_t detectionPulseMaxEmissionMultiplier{ 0.5 };

  /// @brief Field detectionPulseScaleBoost offset 0xffffffff size 0x4
  static constexpr float_t detectionPulseScaleBoost{ 0.2 };

  /// @brief Field maxDetectionCount offset 0xffffffff size 0x4
  static constexpr int32_t maxDetectionCount{ static_cast<int32_t>(0x3) };

  /// @brief Field minTimeBetweenDetects offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenDetects{ 0.5 };

  /// @brief Field pulseMaterialIndex offset 0xffffffff size 0x4
  static constexpr int32_t pulseMaterialIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field shouldDropAfterTooManyDetections offset 0xffffffff size 0x1
  static constexpr bool shouldDropAfterTooManyDetections{ true };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DetectorMapObject, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___detectedPlayerType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___radius) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___timeBetweenChecks) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___nextCheckTime) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___lastDetectTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___detectionCount) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___inDetectionPulse) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___pulseMat) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetectorMapObject, ___isUsingPulseMat) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DetectorMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DetectorMapObject*, "", "DetectorMapObject");
NEED_NO_BOX(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DetectorMapObject___DestroySelfOnDelay_d__24*, "", "DetectorMapObject/<DestroySelfOnDelay>d__24");
