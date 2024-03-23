#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OverrideCamera)
namespace GlobalNamespace {
class Item;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OverrideCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverrideCamera);
// Type: ::OverrideCamera
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OverrideCamera*
class CORDL_TYPE OverrideCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <cameraID>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraID_k__BackingField, put = __cordl_internal_set__cameraID_k__BackingField))::StringW _cameraID_k__BackingField;

  /// @brief Field <isActive>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive_k__BackingField, put = __cordl_internal_set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field <isRecording>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__isRecording_k__BackingField, put = __cordl_internal_set__isRecording_k__BackingField)) bool _isRecording_k__BackingField;

  /// @brief Field <ownerUserID>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ownerUserID_k__BackingField, put = __cordl_internal_set__ownerUserID_k__BackingField))::StringW _ownerUserID_k__BackingField;

  /// @brief Field activeEmissiveColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_activeEmissiveColor, put = __cordl_internal_set_activeEmissiveColor))::UnityEngine::Color activeEmissiveColor;

  /// @brief Field blinkTimer, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_blinkTimer, put = __cordl_internal_set_blinkTimer)) float_t blinkTimer;

  __declspec(property(get = get_cameraID, put = set_cameraID))::StringW cameraID;

  /// @brief Field flashingMat, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_flashingMat, put = __cordl_internal_set_flashingMat))::UnityW<::UnityEngine::Material> flashingMat;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  /// @brief Field isInBlink, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isInBlink, put = __cordl_internal_set_isInBlink)) bool isInBlink;

  __declspec(property(get = get_isRecording, put = set_isRecording)) bool isRecording;

  /// @brief Field isRegistered, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field linkedItem, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_linkedItem, put = __cordl_internal_set_linkedItem))::UnityW<::GlobalNamespace::Item> linkedItem;

  __declspec(property(get = get_ownerUserID, put = set_ownerUserID))::StringW ownerUserID;

  /// @brief Field recordingPlayerCount, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_recordingPlayerCount, put = __cordl_internal_set_recordingPlayerCount)) int32_t recordingPlayerCount;

  /// @brief Field spectateAnchor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_spectateAnchor, put = __cordl_internal_set_spectateAnchor))::UnityW<::UnityEngine::Transform> spectateAnchor;

  /// @brief Method AddRecordingPlayer, addr 0xf3978c, size 0x14, virtual false, abstract: false, final false
  inline void AddRecordingPlayer();

  /// @brief Method Deregister, addr 0xf3942c, size 0x5c, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method Initialize, addr 0xf390f0, size 0x10, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Item* linkedItem, ::StringW cameraID, ::StringW initialOwnerUserID);

  static inline ::GlobalNamespace::OverrideCamera* New_ctor();

  /// @brief Method OnDisable, addr 0xf39400, size 0x2c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf391f8, size 0x38, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Register, addr 0xf393a0, size 0x60, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method RemoveRecordingPlayer, addr 0xf397a0, size 0x24, virtual false, abstract: false, final false
  inline void RemoveRecordingPlayer();

  /// @brief Method SetInBlink, addr 0xf397c4, size 0x90, virtual false, abstract: false, final false
  inline void SetInBlink(bool newInBlink);

  /// @brief Method SetIsRecording, addr 0xf39230, size 0x170, virtual false, abstract: false, final false
  inline void SetIsRecording(bool newIsRecording);

  /// @brief Method SetOwner, addr 0xf39100, size 0x74, virtual false, abstract: false, final false
  inline void SetOwner(::StringW newOwnerUserID);

  /// @brief Method TryRemove, addr 0xf39174, size 0x84, virtual false, abstract: false, final false
  inline void TryRemove();

  /// @brief Method Update, addr 0xf39854, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get__cameraID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__cameraID_k__BackingField();

  constexpr bool const& __cordl_internal_get__isActive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isActive_k__BackingField();

  constexpr bool const& __cordl_internal_get__isRecording_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isRecording_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ownerUserID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ownerUserID_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_activeEmissiveColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_activeEmissiveColor();

  constexpr float_t const& __cordl_internal_get_blinkTimer() const;

  constexpr float_t& __cordl_internal_get_blinkTimer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_flashingMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_flashingMat();

  constexpr bool const& __cordl_internal_get_isInBlink() const;

  constexpr bool& __cordl_internal_get_isInBlink();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::UnityW<::GlobalNamespace::Item> const& __cordl_internal_get_linkedItem() const;

  constexpr ::UnityW<::GlobalNamespace::Item>& __cordl_internal_get_linkedItem();

  constexpr int32_t const& __cordl_internal_get_recordingPlayerCount() const;

  constexpr int32_t& __cordl_internal_get_recordingPlayerCount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spectateAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spectateAnchor();

  constexpr void __cordl_internal_set__cameraID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__isActive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isRecording_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ownerUserID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_activeEmissiveColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_blinkTimer(float_t value);

  constexpr void __cordl_internal_set_flashingMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_isInBlink(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_linkedItem(::UnityW<::GlobalNamespace::Item> value);

  constexpr void __cordl_internal_set_recordingPlayerCount(int32_t value);

  constexpr void __cordl_internal_set_spectateAnchor(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0xf398b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cameraID, addr 0xf390a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_cameraID();

  /// @brief Method get_isActive, addr 0xf390c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_isRecording, addr 0xf390dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRecording();

  /// @brief Method get_ownerUserID, addr 0xf390b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ownerUserID();

  /// @brief Method set_cameraID, addr 0xf390b0, size 0x8, virtual false, abstract: false, final false
  inline void set_cameraID(::StringW value);

  /// @brief Method set_isActive, addr 0xf390d0, size 0xc, virtual false, abstract: false, final false
  inline void set_isActive(bool value);

  /// @brief Method set_isRecording, addr 0xf390e4, size 0xc, virtual false, abstract: false, final false
  inline void set_isRecording(bool value);

  /// @brief Method set_ownerUserID, addr 0xf390c0, size 0x8, virtual false, abstract: false, final false
  inline void set_ownerUserID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverrideCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverrideCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverrideCamera(OverrideCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverrideCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverrideCamera(OverrideCamera const&) = delete;

  /// @brief Field spectateAnchor, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___spectateAnchor;

  /// @brief Field activeEmissiveColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___activeEmissiveColor;

  /// @brief Field isInBlink, offset: 0x30, size: 0x1, def value: None
  bool ___isInBlink;

  /// @brief Field blinkTimer, offset: 0x34, size: 0x4, def value: None
  float_t ___blinkTimer;

  /// @brief Field flashingMat, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___flashingMat;

  /// @brief Field <cameraID>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____cameraID_k__BackingField;

  /// @brief Field <ownerUserID>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____ownerUserID_k__BackingField;

  /// @brief Field <isActive>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  /// @brief Field <isRecording>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____isRecording_k__BackingField;

  /// @brief Field linkedItem, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Item> ___linkedItem;

  /// @brief Field isRegistered, offset: 0x60, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field recordingPlayerCount, offset: 0x64, size: 0x4, def value: None
  int32_t ___recordingPlayerCount;

  /// @brief Field blinkDuration offset 0xffffffff size 0x4
  static constexpr float_t blinkDuration{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverrideCamera, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___spectateAnchor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___activeEmissiveColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___isInBlink) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___blinkTimer) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___flashingMat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ____cameraID_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ____ownerUserID_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ____isActive_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ____isRecording_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___linkedItem) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___isRegistered) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideCamera, ___recordingPlayerCount) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverrideCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideCamera*, "", "OverrideCamera");
