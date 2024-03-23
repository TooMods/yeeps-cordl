#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CameraSwitcher)
namespace UnityEngine::Rendering {
class __DebugUI__EnumField;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GUIContent;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CameraSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraSwitcher);
// Type: UnityEngine.Rendering::CameraSwitcher
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CameraSwitcher*
class CORDL_TYPE CameraSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_CameraIndices, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraIndices, put = __cordl_internal_set_m_CameraIndices))::ArrayW<int32_t, ::Array<int32_t>*> m_CameraIndices;

  /// @brief Field m_CameraNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraNames, put = __cordl_internal_set_m_CameraNames))::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> m_CameraNames;

  /// @brief Field m_Cameras, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cameras, put = __cordl_internal_set_m_Cameras))::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> m_Cameras;

  /// @brief Field m_CurrentCamera, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentCamera, put = __cordl_internal_set_m_CurrentCamera))::UnityW<::UnityEngine::Camera> m_CurrentCamera;

  /// @brief Field m_CurrentCameraIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentCameraIndex, put = __cordl_internal_set_m_CurrentCameraIndex)) int32_t m_CurrentCameraIndex;

  /// @brief Field m_DebugEntry, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugEntry, put = __cordl_internal_set_m_DebugEntry))::UnityEngine::Rendering::__DebugUI__EnumField* m_DebugEntry;

  /// @brief Field m_DebugEntryEnumIndex, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DebugEntryEnumIndex, put = __cordl_internal_set_m_DebugEntryEnumIndex)) int32_t m_DebugEntryEnumIndex;

  /// @brief Field m_OriginalCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalCamera, put = __cordl_internal_set_m_OriginalCamera))::UnityW<::UnityEngine::Camera> m_OriginalCamera;

  /// @brief Field m_OriginalCameraPosition, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_m_OriginalCameraPosition, put = __cordl_internal_set_m_OriginalCameraPosition))::UnityEngine::Vector3 m_OriginalCameraPosition;

  /// @brief Field m_OriginalCameraRotation, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_OriginalCameraRotation, put = __cordl_internal_set_m_OriginalCameraRotation))::UnityEngine::Quaternion m_OriginalCameraRotation;

  /// @brief Method GetCameraCount, addr 0x1bce3f8, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetCameraCount();

  /// @brief Method GetNextCamera, addr 0x1bce80c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> GetNextCamera();

  static inline ::UnityEngine::Rendering::CameraSwitcher* New_ctor();

  /// @brief Method OnDisable, addr 0x1bce77c, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1bcdedc, size 0x51c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetCameraIndex, addr 0x1bce854, size 0x21c, virtual false, abstract: false, final false
  inline void SetCameraIndex(int32_t index);

  /// @brief Method <OnEnable>b__10_0, addr 0x1bcea80, size 0x8, virtual false, abstract: false, final false
  inline int32_t _OnEnable_b__10_0();

  /// @brief Method <OnEnable>b__10_1, addr 0x1bcea88, size 0x4, virtual false, abstract: false, final false
  inline void _OnEnable_b__10_1(int32_t value);

  /// @brief Method <OnEnable>b__10_2, addr 0x1bcea8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t _OnEnable_b__10_2();

  /// @brief Method <OnEnable>b__10_3, addr 0x1bcea94, size 0x8, virtual false, abstract: false, final false
  inline void _OnEnable_b__10_3(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_CameraIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_CameraIndices();

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __cordl_internal_get_m_CameraNames() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __cordl_internal_get_m_CameraNames();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> const& __cordl_internal_get_m_Cameras() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>& __cordl_internal_get_m_Cameras();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_CurrentCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_CurrentCamera();

  constexpr int32_t const& __cordl_internal_get_m_CurrentCameraIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentCameraIndex();

  constexpr ::UnityEngine::Rendering::__DebugUI__EnumField*& __cordl_internal_get_m_DebugEntry();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__EnumField*> const& __cordl_internal_get_m_DebugEntry() const;

  constexpr int32_t const& __cordl_internal_get_m_DebugEntryEnumIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DebugEntryEnumIndex();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_OriginalCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_OriginalCamera();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_OriginalCameraPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_OriginalCameraPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_OriginalCameraRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_OriginalCameraRotation();

  constexpr void __cordl_internal_set_m_CameraIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_CameraNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr void __cordl_internal_set_m_Cameras(::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> value);

  constexpr void __cordl_internal_set_m_CurrentCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_CurrentCameraIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DebugEntry(::UnityEngine::Rendering::__DebugUI__EnumField* value);

  constexpr void __cordl_internal_set_m_DebugEntryEnumIndex(int32_t value);

  constexpr void __cordl_internal_set_m_OriginalCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_OriginalCameraPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_OriginalCameraRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x1bcea70, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraSwitcher(CameraSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraSwitcher(CameraSwitcher const&) = delete;

  /// @brief Field m_Cameras, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> ___m_Cameras;

  /// @brief Field m_CurrentCameraIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CurrentCameraIndex;

  /// @brief Field m_OriginalCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_OriginalCamera;

  /// @brief Field m_OriginalCameraPosition, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_OriginalCameraPosition;

  /// @brief Field m_OriginalCameraRotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_OriginalCameraRotation;

  /// @brief Field m_CurrentCamera, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_CurrentCamera;

  /// @brief Field m_CameraNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> ___m_CameraNames;

  /// @brief Field m_CameraIndices, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_CameraIndices;

  /// @brief Field m_DebugEntry, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::__DebugUI__EnumField* ___m_DebugEntry;

  /// @brief Field m_DebugEntryEnumIndex, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_DebugEntryEnumIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraSwitcher, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_Cameras) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_CurrentCameraIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_OriginalCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_OriginalCameraPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_OriginalCameraRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_CurrentCamera) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_CameraNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_CameraIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_DebugEntry) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraSwitcher, ___m_DebugEntryEnumIndex) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CameraSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraSwitcher*, "UnityEngine.Rendering", "CameraSwitcher");
