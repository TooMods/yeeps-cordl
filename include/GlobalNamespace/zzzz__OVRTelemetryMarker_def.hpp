#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryMarker)
namespace GlobalNamespace {
struct __OVRPlugin__Qpl__ResultType;
}
namespace GlobalNamespace {
struct __OVRTelemetryMarker__OVRTelemetryMarkerState;
}
namespace GlobalNamespace {
struct __OVRTelemetry__MarkerPoint;
}
namespace GlobalNamespace {
class __OVRTelemetry__TelemetryClient;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
struct __OVRTelemetryMarker__OVRTelemetryMarkerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTelemetryMarker);
MARK_VAL_T(::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState);
// Type: ::OVRTelemetryMarkerState
// SizeInfo { instance_size: 4, native_size: 8, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTelemetryMarker::OVRTelemetryMarkerState
struct CORDL_TYPE __OVRTelemetryMarker__OVRTelemetryMarkerState {
public:
  // Declarations
  __declspec(property(get = get_Result, put = set_Result))::GlobalNamespace::__OVRPlugin__Qpl__ResultType Result;

  __declspec(property(get = get_Sent, put = set_Sent)) bool Sent;

  /// @brief Method .ctor, addr 0x14db8c0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool sent, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType result);

  /// @brief Method get_Result, addr 0x14db9a0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__Qpl__ResultType get_Result();

  /// @brief Method get_Sent, addr 0x14db98c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Sent();

  /// @brief Method set_Result, addr 0x14db9a8, size 0x8, virtual false, abstract: false, final false
  inline void set_Result(::GlobalNamespace::__OVRPlugin__Qpl__ResultType value);

  /// @brief Method set_Sent, addr 0x14db994, size 0xc, virtual false, abstract: false, final false
  inline void set_Sent(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetryMarker__OVRTelemetryMarkerState();

  // Ctor Parameters [CppParam { name: "_Sent_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Result_k__BackingField", ty:
  // "::GlobalNamespace::__OVRPlugin__Qpl__ResultType", modifiers: "", def_value: None }]
  constexpr __OVRTelemetryMarker__OVRTelemetryMarkerState(bool _Sent_k__BackingField, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType _Result_k__BackingField) noexcept;

  /// @brief Field <Sent>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _Sent_k__BackingField;

  /// @brief Field <Result>k__BackingField, offset: 0x2, size: 0x2, def value: None
  ::GlobalNamespace::__OVRPlugin__Qpl__ResultType _Result_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState, _Sent_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState, _Result_k__BackingField) == 0x2, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTelemetryMarker
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTelemetryMarker
struct CORDL_TYPE OVRTelemetryMarker {
public:
  // Declarations
  using OVRTelemetryMarkerState = ::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState;

  __declspec(property(get = get_InstanceKey)) int32_t InstanceKey;

  __declspec(property(get = get_MarkerId)) int32_t MarkerId;

  __declspec(property(get = get_Result))::GlobalNamespace::__OVRPlugin__Qpl__ResultType Result;

  __declspec(property(get = get_Sent)) bool Sent;

  __declspec(property(get = get_State, put = set_State))::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState State;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddAnnotation, addr 0x14db4e8, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW annotationKey, ::StringW annotationValue);

  /// @brief Method AddPoint, addr 0x14db918, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker AddPoint(::GlobalNamespace::__OVRTelemetry__MarkerPoint point);

  /// @brief Method Dispose, addr 0x14db968, size 0x24, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Send, addr 0x14db358, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker Send();

  /// @brief Method SendIf, addr 0x14db8d0, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker SendIf(bool condition);

  /// @brief Method SetResult, addr 0x14db330, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker SetResult(::GlobalNamespace::__OVRPlugin__Qpl__ResultType result);

  /// @brief Method .ctor, addr 0x14db880, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__OVRTelemetry__TelemetryClient* client, int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method .ctor, addr 0x14db1dc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method get_InstanceKey, addr 0x14db878, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_InstanceKey();

  /// @brief Method get_MarkerId, addr 0x14db870, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MarkerId();

  /// @brief Method get_Result, addr 0x14db868, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__Qpl__ResultType get_Result();

  /// @brief Method get_Sent, addr 0x14db858, size 0x10, virtual false, abstract: false, final false
  inline bool get_Sent();

  /// @brief Method get_State, addr 0x14db848, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState get_State();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_State, addr 0x14db850, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetryMarker();

  // Ctor Parameters [CppParam { name: "_State_k__BackingField", ty: "::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState", modifiers: "", def_value: None }, CppParam { name:
  // "_MarkerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_InstanceKey_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_client", ty: "::GlobalNamespace::__OVRTelemetry__TelemetryClient*", modifiers: "", def_value: None }]
  constexpr OVRTelemetryMarker(::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState _State_k__BackingField, int32_t _MarkerId_k__BackingField, int32_t _InstanceKey_k__BackingField,
                               ::GlobalNamespace::__OVRTelemetry__TelemetryClient* _client) noexcept;

  /// @brief Field <State>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState _State_k__BackingField;

  /// @brief Field <MarkerId>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _MarkerId_k__BackingField;

  /// @brief Field <InstanceKey>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _InstanceKey_k__BackingField;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__OVRTelemetry__TelemetryClient* _client;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryMarker, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _State_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _MarkerId_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _InstanceKey_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _client) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryMarker, "", "OVRTelemetryMarker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetryMarker__OVRTelemetryMarkerState, "", "OVRTelemetryMarker/OVRTelemetryMarkerState");
