#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVROverlay)
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
namespace OVR::OpenVR {
struct EOverlayDirection;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVROverlayError;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdRect2_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
namespace OVR::OpenVR {
struct VROverlayFlags;
}
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct __CVROverlay__PollNextOverlayEventUnion;
}
namespace OVR::OpenVR {
class __CVROverlay___PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
class __IVROverlay___PollNextOverlayEvent;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVROverlay;
}
namespace OVR::OpenVR {
class __CVROverlay___PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
struct __CVROverlay__PollNextOverlayEventUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVROverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked);
MARK_VAL_T(::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion);
// Type: ::_PollNextOverlayEventPacked
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::CVROverlay::_PollNextOverlayEventPacked*
class CORDL_TYPE __CVROverlay___PollNextOverlayEventPacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a79150, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a79238, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a7913c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a79078, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVROverlay___PollNextOverlayEventPacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CVROverlay___PollNextOverlayEventPacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CVROverlay___PollNextOverlayEventPacked(__CVROverlay___PollNextOverlayEventPacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CVROverlay___PollNextOverlayEventPacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CVROverlay___PollNextOverlayEventPacked(__CVROverlay___PollNextOverlayEventPacked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::PollNextOverlayEventUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::CVROverlay::PollNextOverlayEventUnion
struct CORDL_TYPE __CVROverlay__PollNextOverlayEventUnion {
public:
  // Declarations
  /// @brief Field pPollNextOverlayEvent, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pPollNextOverlayEvent, put = __cordl_internal_set_pPollNextOverlayEvent))::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* pPollNextOverlayEvent;

  /// @brief Field pPollNextOverlayEventPacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pPollNextOverlayEventPacked,
                      put = __cordl_internal_set_pPollNextOverlayEventPacked))::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* pPollNextOverlayEventPacked;

  constexpr ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*& __cordl_internal_get_pPollNextOverlayEvent();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*> const& __cordl_internal_get_pPollNextOverlayEvent() const;

  constexpr ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*& __cordl_internal_get_pPollNextOverlayEventPacked();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*> const& __cordl_internal_get_pPollNextOverlayEventPacked() const;

  constexpr void __cordl_internal_set_pPollNextOverlayEvent(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* value);

  constexpr void __cordl_internal_set_pPollNextOverlayEventPacked(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVROverlay__PollNextOverlayEventUnion();

  // Ctor Parameters [CppParam { name: "pPollNextOverlayEvent", ty: "::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*", modifiers: "", def_value: None }, CppParam { name:
  // "pPollNextOverlayEventPacked", ty: "::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*", modifiers: "", def_value: None }]
  constexpr __CVROverlay__PollNextOverlayEventUnion(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* pPollNextOverlayEvent,
                                                    ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* pPollNextOverlayEventPacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextOverlayEvent_padding[0x0];
      /// @brief Field pPollNextOverlayEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* ___pPollNextOverlayEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextOverlayEvent_padding_forAlignment[0x0];
      /// @brief Field pPollNextOverlayEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* ___pPollNextOverlayEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextOverlayEventPacked_padding[0x0];
      /// @brief Field pPollNextOverlayEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* ___pPollNextOverlayEventPacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextOverlayEventPacked_padding_forAlignment[0x0];
      /// @brief Field pPollNextOverlayEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* ___pPollNextOverlayEventPacked_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::CVROverlay
// SizeInfo { instance_size: 672, native_size: -1, calculated_instance_size: 672, calculated_native_size: 672, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::CVROverlay*
class CORDL_TYPE CVROverlay : public ::System::Object {
public:
  // Declarations
  using PollNextOverlayEventUnion = ::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion;

  using _PollNextOverlayEventPacked = ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked;

  /// @brief Field FnTable, offset 0x10, size 0x290
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable))::OVR::OpenVR::IVROverlay FnTable;

  /// @brief Method ClearOverlayTexture, addr 0x2a78cf8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError ClearOverlayTexture(uint64_t ulOverlayHandle);

  /// @brief Method CloseMessageOverlay, addr 0x2a79054, size 0x24, virtual false, abstract: false, final false
  inline void CloseMessageOverlay();

  /// @brief Method ComputeOverlayIntersection, addr 0x2a78bb0, size 0x24, virtual false, abstract: false, final false
  inline bool ComputeOverlayIntersection(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults);

  /// @brief Method CreateDashboardOverlay, addr 0x2a78df0, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError CreateDashboardOverlay(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle);

  /// @brief Method CreateOverlay, addr 0x2a782cc, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError CreateOverlay(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle);

  /// @brief Method DestroyOverlay, addr 0x2a782f4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError DestroyOverlay(uint64_t ulOverlayHandle);

  /// @brief Method FindOverlay, addr 0x2a782a4, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError FindOverlay(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle);

  /// @brief Method GetDashboardOverlaySceneProcess, addr 0x2a78e88, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId);

  /// @brief Method GetGamepadFocusOverlay, addr 0x2a78bf8, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetGamepadFocusOverlay();

  /// @brief Method GetHighQualityOverlay, addr 0x2a7833c, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetHighQualityOverlay();

  /// @brief Method GetKeyboardText, addr 0x2a78f54, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetKeyboardText(::System::Text::StringBuilder* pchText, uint32_t cchText);

  /// @brief Method GetOverlayAlpha, addr 0x2a7858c, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayAlpha(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha);

  /// @brief Method GetOverlayAutoCurveDistanceRangeInMeters, addr 0x2a786bc, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters);

  /// @brief Method GetOverlayColor, addr 0x2a78538, size 0x30, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayColor(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue);

  /// @brief Method GetOverlayDualAnalogTransform, addr 0x2a78cac, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius);

  /// @brief Method GetOverlayErrorNameFromEnum, addr 0x2a783f8, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetOverlayErrorNameFromEnum(::OVR::OpenVR::EVROverlayError error);

  /// @brief Method GetOverlayFlag, addr 0x2a784ec, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled);

  /// @brief Method GetOverlayFlags, addr 0x2a79008, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayFlags(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags);

  /// @brief Method GetOverlayImageData, addr 0x2a783cc, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayImageData(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight);

  /// @brief Method GetOverlayInputMethod, addr 0x2a78b20, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayInputMethod(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod);

  /// @brief Method GetOverlayKey, addr 0x2a78360, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetOverlayKey(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method GetOverlayMouseScale, addr 0x2a78b68, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayMouseScale(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  /// @brief Method GetOverlayName, addr 0x2a78384, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetOverlayName(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method GetOverlayRenderModel, addr 0x2a78778, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetOverlayRenderModel(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                                        ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method GetOverlayRenderingPid, addr 0x2a784a0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetOverlayRenderingPid(uint64_t ulOverlayHandle);

  /// @brief Method GetOverlaySortOrder, addr 0x2a78624, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlaySortOrder(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder);

  /// @brief Method GetOverlayTexelAspect, addr 0x2a785d8, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTexelAspect(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect);

  /// @brief Method GetOverlayTexture, addr 0x2a78d64, size 0x3c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTexture(uint64_t ulOverlayHandle, ByRef<void*> pNativeTextureHandle, void* pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight,
                                                          ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                          ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds);

  /// @brief Method GetOverlayTextureBounds, addr 0x2a78754, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureBounds(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  /// @brief Method GetOverlayTextureColorSpace, addr 0x2a7870c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace);

  /// @brief Method GetOverlayTextureSize, addr 0x2a78dc4, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureSize(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight);

  /// @brief Method GetOverlayTransformAbsolute, addr 0x2a78808, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                    ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  /// @brief Method GetOverlayTransformOverlayRelative, addr 0x2a788c4, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent,
                                                                           ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  /// @brief Method GetOverlayTransformTrackedDeviceComponent, addr 0x2a7889c, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName,
                                                                                  uint32_t unComponentNameSize);

  /// @brief Method GetOverlayTransformTrackedDeviceRelative, addr 0x2a78850, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice,
                                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  /// @brief Method GetOverlayTransformType, addr 0x2a787c0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformType(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType);

  /// @brief Method GetOverlayWidthInMeters, addr 0x2a78670, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayWidthInMeters(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters);

  /// @brief Method GetPrimaryDashboardDevice, addr 0x2a78ed4, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetPrimaryDashboardDevice();

  /// @brief Method GetTransformForOverlayCoordinates, addr 0x2a7897c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                          ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform);

  /// @brief Method HideKeyboard, addr 0x2a78f78, size 0x24, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method HideOverlay, addr 0x2a78934, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError HideOverlay(uint64_t ulOverlayHandle);

  /// @brief Method IsActiveDashboardOverlay, addr 0x2a78e40, size 0x24, virtual false, abstract: false, final false
  inline bool IsActiveDashboardOverlay(uint64_t ulOverlayHandle);

  /// @brief Method IsDashboardVisible, addr 0x2a78e1c, size 0x24, virtual false, abstract: false, final false
  inline bool IsDashboardVisible();

  /// @brief Method IsHoverTargetOverlay, addr 0x2a78bd4, size 0x24, virtual false, abstract: false, final false
  inline bool IsHoverTargetOverlay(uint64_t ulOverlayHandle);

  /// @brief Method IsOverlayVisible, addr 0x2a78958, size 0x24, virtual false, abstract: false, final false
  inline bool IsOverlayVisible(uint64_t ulOverlayHandle);

  /// @brief Method MoveGamepadFocusToNeighbor, addr 0x2a78c64, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError MoveGamepadFocusToNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);

  static inline ::OVR::OpenVR::CVROverlay* New_ctor(void* pInterface);

  /// @brief Method PollNextOverlayEvent, addr 0x2a789a0, size 0x180, virtual false, abstract: false, final false
  inline bool PollNextOverlayEvent(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  /// @brief Method ReleaseNativeOverlayHandle, addr 0x2a78da0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, void* pNativeTextureHandle);

  /// @brief Method SetDashboardOverlaySceneProcess, addr 0x2a78e64, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint32_t unProcessId);

  /// @brief Method SetGamepadFocusOverlay, addr 0x2a78c1c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay);

  /// @brief Method SetHighQualityOverlay, addr 0x2a78318, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetHighQualityOverlay(uint64_t ulOverlayHandle);

  /// @brief Method SetKeyboardPositionForOverlay, addr 0x2a78fc0, size 0x24, virtual false, abstract: false, final false
  inline void SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect);

  /// @brief Method SetKeyboardTransformAbsolute, addr 0x2a78f9c, size 0x24, virtual false, abstract: false, final false
  inline void SetKeyboardTransformAbsolute(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform);

  /// @brief Method SetOverlayAlpha, addr 0x2a78568, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayAlpha(uint64_t ulOverlayHandle, float_t fAlpha);

  /// @brief Method SetOverlayAutoCurveDistanceRangeInMeters, addr 0x2a78698, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters);

  /// @brief Method SetOverlayColor, addr 0x2a78514, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayColor(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue);

  /// @brief Method SetOverlayDualAnalogTransform, addr 0x2a78c88, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, void* vCenter, float_t fRadius);

  /// @brief Method SetOverlayFlag, addr 0x2a784c4, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled);

  /// @brief Method SetOverlayFromFile, addr 0x2a78d40, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayFromFile(uint64_t ulOverlayHandle, ::StringW pchFilePath);

  /// @brief Method SetOverlayInputMethod, addr 0x2a78b44, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayInputMethod(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod);

  /// @brief Method SetOverlayIntersectionMask, addr 0x2a78fe4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayIntersectionMask(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                                                   uint32_t unPrimitiveSize);

  /// @brief Method SetOverlayMouseScale, addr 0x2a78b8c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayMouseScale(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  /// @brief Method SetOverlayName, addr 0x2a783a8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayName(uint64_t ulOverlayHandle, ::StringW pchName);

  /// @brief Method SetOverlayNeighbor, addr 0x2a78c40, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);

  /// @brief Method SetOverlayRaw, addr 0x2a78d1c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayRaw(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);

  /// @brief Method SetOverlayRenderModel, addr 0x2a7879c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayRenderModel(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor);

  /// @brief Method SetOverlayRenderingPid, addr 0x2a7847c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint32_t unPID);

  /// @brief Method SetOverlaySortOrder, addr 0x2a78600, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlaySortOrder(uint64_t ulOverlayHandle, uint32_t unSortOrder);

  /// @brief Method SetOverlayTexelAspect, addr 0x2a785b4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTexelAspect(uint64_t ulOverlayHandle, float_t fTexelAspect);

  /// @brief Method SetOverlayTexture, addr 0x2a78cd4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTexture(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture);

  /// @brief Method SetOverlayTextureBounds, addr 0x2a78730, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTextureBounds(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  /// @brief Method SetOverlayTextureColorSpace, addr 0x2a786e8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace);

  /// @brief Method SetOverlayTransformAbsolute, addr 0x2a787e4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                    ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  /// @brief Method SetOverlayTransformOverlayRelative, addr 0x2a788ec, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                           ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  /// @brief Method SetOverlayTransformTrackedDeviceComponent, addr 0x2a78878, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName);

  /// @brief Method SetOverlayTransformTrackedDeviceRelative, addr 0x2a7882c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  /// @brief Method SetOverlayWidthInMeters, addr 0x2a7864c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float_t fWidthInMeters);

  /// @brief Method ShowDashboard, addr 0x2a78eb0, size 0x24, virtual false, abstract: false, final false
  inline void ShowDashboard(::StringW pchOverlayToShow);

  /// @brief Method ShowKeyboard, addr 0x2a78ef8, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError ShowKeyboard(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                                     uint64_t uUserValue);

  /// @brief Method ShowKeyboardForOverlay, addr 0x2a78f24, size 0x30, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax,
                                                               ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);

  /// @brief Method ShowMessageOverlay, addr 0x2a79030, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse ShowMessageOverlay(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text,
                                                                    ::StringW pchButton3Text);

  /// @brief Method ShowOverlay, addr 0x2a78910, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError ShowOverlay(uint64_t ulOverlayHandle);

  constexpr ::OVR::OpenVR::IVROverlay const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVROverlay& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVROverlay value);

  /// @brief Method .ctor, addr 0x2a78190, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(void* pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVROverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVROverlay(CVROverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVROverlay(CVROverlay const&) = delete;

  /// @brief Field FnTable, offset: 0x10, size: 0x290, def value: None
  ::OVR::OpenVR::IVROverlay ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVROverlay, 0x2a0>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVROverlay, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVROverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVROverlay*, "OVR.OpenVR", "CVROverlay");
NEED_NO_BOX(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*, "OVR.OpenVR", "CVROverlay/_PollNextOverlayEventPacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion, "OVR.OpenVR", "CVROverlay/PollNextOverlayEventUnion");
