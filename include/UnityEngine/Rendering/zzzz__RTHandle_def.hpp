#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandle)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct FastMemoryFlags;
}
namespace UnityEngine::Rendering {
struct RTHandleProperties;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RTHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RTHandle);
// Type: UnityEngine.Rendering::RTHandle
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::RTHandle*
class CORDL_TYPE RTHandle : public ::System::Object {
public:
  // Declarations
  /// @brief Field <referenceSize>k__BackingField, offset 0xac, size 0x8
  __declspec(property(get = __cordl_internal_get__referenceSize_k__BackingField, put = __cordl_internal_set__referenceSize_k__BackingField))::UnityEngine::Vector2Int _referenceSize_k__BackingField;

  /// @brief Field <scaleFactor>k__BackingField, offset 0x94, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleFactor_k__BackingField, put = __cordl_internal_set__scaleFactor_k__BackingField))::UnityEngine::Vector2 _scaleFactor_k__BackingField;

  /// @brief Field <useScaling>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__useScaling_k__BackingField, put = __cordl_internal_set__useScaling_k__BackingField)) bool _useScaling_k__BackingField;

  __declspec(property(get = get_isMSAAEnabled)) bool isMSAAEnabled;

  /// @brief Field m_CustomHandleProperties, offset 0x64, size 0x30
  __declspec(property(get = __cordl_internal_get_m_CustomHandleProperties, put = __cordl_internal_set_m_CustomHandleProperties))::UnityEngine::Rendering::RTHandleProperties m_CustomHandleProperties;

  /// @brief Field m_EnableHWDynamicScale, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableHWDynamicScale, put = __cordl_internal_set_m_EnableHWDynamicScale)) bool m_EnableHWDynamicScale;

  /// @brief Field m_EnableMSAA, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableMSAA, put = __cordl_internal_set_m_EnableMSAA)) bool m_EnableMSAA;

  /// @brief Field m_EnableRandomWrite, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRandomWrite, put = __cordl_internal_set_m_EnableRandomWrite)) bool m_EnableRandomWrite;

  /// @brief Field m_ExternalTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExternalTexture, put = __cordl_internal_set_m_ExternalTexture))::UnityW<::UnityEngine::Texture> m_ExternalTexture;

  /// @brief Field m_Name, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_NameID, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get_m_NameID, put = __cordl_internal_set_m_NameID))::UnityEngine::Rendering::RenderTargetIdentifier m_NameID;

  /// @brief Field m_Owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner))::UnityEngine::Rendering::RTHandleSystem* m_Owner;

  /// @brief Field m_RT, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RT, put = __cordl_internal_set_m_RT))::UnityW<::UnityEngine::RenderTexture> m_RT;

  /// @brief Field m_UseCustomHandleScales, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseCustomHandleScales, put = __cordl_internal_set_m_UseCustomHandleScales)) bool m_UseCustomHandleScales;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_nameID))::UnityEngine::Rendering::RenderTargetIdentifier nameID;

  __declspec(property(get = get_referenceSize, put = set_referenceSize))::UnityEngine::Vector2Int referenceSize;

  __declspec(property(get = get_rt))::UnityW<::UnityEngine::RenderTexture> rt;

  __declspec(property(get = get_rtHandleProperties))::UnityEngine::Rendering::RTHandleProperties rtHandleProperties;

  __declspec(property(get = get_scaleFactor, put = set_scaleFactor))::UnityEngine::Vector2 scaleFactor;

  /// @brief Field scaleFunc, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleFunc, put = __cordl_internal_set_scaleFunc))::UnityEngine::Rendering::ScaleFunc* scaleFunc;

  __declspec(property(get = get_useScaling, put = set_useScaling)) bool useScaling;

  /// @brief Method ClearCustomHandleProperties, addr 0x1a07e08, size 0x8, virtual false, abstract: false, final false
  inline void ClearCustomHandleProperties();

  /// @brief Method CopyToFastMemory, addr 0x1a08660, size 0x8, virtual false, abstract: false, final false
  inline void CopyToFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, float_t residencyFraction, ::UnityEngine::Rendering::FastMemoryFlags flags);

  /// @brief Method GetInstanceID, addr 0x1a08014, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetInstanceID();

  /// @brief Method GetScaledSize, addr 0x1a083e8, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetScaledSize();

  /// @brief Method GetScaledSize, addr 0x1a081e4, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int refSize);

  static inline ::UnityEngine::Rendering::RTHandle* New_ctor(::UnityEngine::Rendering::RTHandleSystem* owner);

  /// @brief Method Release, addr 0x1a080d0, size 0xbc, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetCustomHandleProperties, addr 0x1a07de8, size 0x20, virtual false, abstract: false, final false
  inline void SetCustomHandleProperties(ByRef<::UnityEngine::Rendering::RTHandleProperties> properties);

  /// @brief Method SetRenderTexture, addr 0x1a07f68, size 0x48, virtual false, abstract: false, final false
  inline void SetRenderTexture(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetTexture, addr 0x1a07ff8, size 0x1c, virtual false, abstract: false, final false
  inline void SetTexture(::UnityEngine::Rendering::RenderTargetIdentifier tex);

  /// @brief Method SetTexture, addr 0x1a07fb0, size 0x48, virtual false, abstract: false, final false
  inline void SetTexture(::UnityEngine::Texture* tex);

  /// @brief Method SwitchOutFastMemory, addr 0x1a08668, size 0x5c, virtual false, abstract: false, final false
  inline void SwitchOutFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, bool copyContents);

  /// @brief Method SwitchToFastMemory, addr 0x1a085dc, size 0x84, virtual false, abstract: false, final false
  inline void SwitchToFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, float_t residencyFraction, ::UnityEngine::Rendering::FastMemoryFlags flags, bool copyContents);

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__referenceSize_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__referenceSize_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__scaleFactor_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__scaleFactor_k__BackingField();

  constexpr bool const& __cordl_internal_get__useScaling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useScaling_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandleProperties const& __cordl_internal_get_m_CustomHandleProperties() const;

  constexpr ::UnityEngine::Rendering::RTHandleProperties& __cordl_internal_get_m_CustomHandleProperties();

  constexpr bool const& __cordl_internal_get_m_EnableHWDynamicScale() const;

  constexpr bool& __cordl_internal_get_m_EnableHWDynamicScale();

  constexpr bool const& __cordl_internal_get_m_EnableMSAA() const;

  constexpr bool& __cordl_internal_get_m_EnableMSAA();

  constexpr bool const& __cordl_internal_get_m_EnableRandomWrite() const;

  constexpr bool& __cordl_internal_get_m_EnableRandomWrite();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_m_ExternalTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_m_ExternalTexture();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_NameID() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_NameID();

  constexpr ::UnityEngine::Rendering::RTHandleSystem*& __cordl_internal_get_m_Owner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::RTHandleSystem*> const& __cordl_internal_get_m_Owner() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_RT() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_RT();

  constexpr bool const& __cordl_internal_get_m_UseCustomHandleScales() const;

  constexpr bool& __cordl_internal_get_m_UseCustomHandleScales();

  constexpr ::UnityEngine::Rendering::ScaleFunc*& __cordl_internal_get_scaleFunc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ScaleFunc*> const& __cordl_internal_get_scaleFunc() const;

  constexpr void __cordl_internal_set__referenceSize_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set__scaleFactor_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__useScaling_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_CustomHandleProperties(::UnityEngine::Rendering::RTHandleProperties value);

  constexpr void __cordl_internal_set_m_EnableHWDynamicScale(bool value);

  constexpr void __cordl_internal_set_m_EnableMSAA(bool value);

  constexpr void __cordl_internal_set_m_EnableRandomWrite(bool value);

  constexpr void __cordl_internal_set_m_ExternalTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_NameID(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_Owner(::UnityEngine::Rendering::RTHandleSystem* value);

  constexpr void __cordl_internal_set_m_RT(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_UseCustomHandleScales(bool value);

  constexpr void __cordl_internal_set_scaleFunc(::UnityEngine::Rendering::ScaleFunc* value);

  /// @brief Method .ctor, addr 0x1a07eb4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RTHandleSystem* owner);

  /// @brief Method get_isMSAAEnabled, addr 0x1a07eac, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMSAAEnabled();

  /// @brief Method get_name, addr 0x1a07ea4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_nameID, addr 0x1a07e8c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_nameID();

  /// @brief Method get_referenceSize, addr 0x1a07e34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_referenceSize();

  /// @brief Method get_rt, addr 0x1a07e84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_rt();

  /// @brief Method get_rtHandleProperties, addr 0x1a07e44, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();

  /// @brief Method get_scaleFactor, addr 0x1a07e10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scaleFactor();

  /// @brief Method get_useScaling, addr 0x1a07e20, size 0x8, virtual false, abstract: false, final false
  inline bool get_useScaling();

  /// @brief Method op_Implicit, addr 0x1a034a0, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::RTHandle* handle);

  /// @brief Method op_Implicit, addr 0x1a07f5c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> op_Implicit___UnityW___UnityEngine__RenderTexture_(::UnityEngine::Rendering::RTHandle* handle);

  /// @brief Method op_Implicit, addr 0x1a07edc, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> op_Implicit___UnityW___UnityEngine__Texture_(::UnityEngine::Rendering::RTHandle* handle);

  /// @brief Method set_referenceSize, addr 0x1a07e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceSize(::UnityEngine::Vector2Int value);

  /// @brief Method set_scaleFactor, addr 0x1a07e18, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleFactor(::UnityEngine::Vector2 value);

  /// @brief Method set_useScaling, addr 0x1a07e28, size 0xc, virtual false, abstract: false, final false
  inline void set_useScaling(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandle(RTHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandle(RTHandle const&) = delete;

  /// @brief Field m_Owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandleSystem* ___m_Owner;

  /// @brief Field m_RT, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_RT;

  /// @brief Field m_ExternalTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___m_ExternalTexture;

  /// @brief Field m_NameID, offset: 0x28, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_NameID;

  /// @brief Field m_EnableMSAA, offset: 0x50, size: 0x1, def value: None
  bool ___m_EnableMSAA;

  /// @brief Field m_EnableRandomWrite, offset: 0x51, size: 0x1, def value: None
  bool ___m_EnableRandomWrite;

  /// @brief Field m_EnableHWDynamicScale, offset: 0x52, size: 0x1, def value: None
  bool ___m_EnableHWDynamicScale;

  /// @brief Field m_Name, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_UseCustomHandleScales, offset: 0x60, size: 0x1, def value: None
  bool ___m_UseCustomHandleScales;

  /// @brief Field m_CustomHandleProperties, offset: 0x64, size: 0x30, def value: None
  ::UnityEngine::Rendering::RTHandleProperties ___m_CustomHandleProperties;

  /// @brief Field <scaleFactor>k__BackingField, offset: 0x94, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____scaleFactor_k__BackingField;

  /// @brief Field scaleFunc, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScaleFunc* ___scaleFunc;

  /// @brief Field <useScaling>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____useScaling_k__BackingField;

  /// @brief Field <referenceSize>k__BackingField, offset: 0xac, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____referenceSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTHandle, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_Owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_RT) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_ExternalTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_NameID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_EnableMSAA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_EnableRandomWrite) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_EnableHWDynamicScale) == 0x52, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_Name) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_UseCustomHandleScales) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___m_CustomHandleProperties) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ____scaleFactor_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ___scaleFunc) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ____useScaling_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandle, ____referenceSize_k__BackingField) == 0xac, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RTHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandle*, "UnityEngine.Rendering", "RTHandle");
