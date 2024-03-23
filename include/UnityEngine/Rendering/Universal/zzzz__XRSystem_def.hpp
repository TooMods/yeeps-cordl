#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class XRPass;
}
namespace UnityEngine::Rendering::Universal {
class XRSystemData;
}
namespace UnityEngine::Rendering::Universal {
class __XRSystem__XRShaderIDs;
}
namespace UnityEngine::Rendering::Universal {
struct __XRSystem____c__DisplayClass26_0;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderPass;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRSystem;
}
namespace UnityEngine::Rendering::Universal {
class __XRSystem__XRShaderIDs;
}
namespace UnityEngine::Rendering::Universal {
struct __XRSystem____c__DisplayClass26_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRSystem);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0);
// Type: ::XRShaderIDs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::XRSystem::XRShaderIDs*
class CORDL_TYPE __XRSystem__XRShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _SRGBRead, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SRGBRead, put = setStaticF__SRGBRead)) int32_t _SRGBRead;

  /// @brief Field _SRGBWrite, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SRGBWrite, put = setStaticF__SRGBWrite)) int32_t _SRGBWrite;

  /// @brief Field _SourceTexArraySlice, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SourceTexArraySlice, put = setStaticF__SourceTexArraySlice)) int32_t _SourceTexArraySlice;

  static inline int32_t getStaticF__SRGBRead();

  static inline int32_t getStaticF__SRGBWrite();

  static inline int32_t getStaticF__SourceTexArraySlice();

  static inline void setStaticF__SRGBRead(int32_t value);

  static inline void setStaticF__SRGBWrite(int32_t value);

  static inline void setStaticF__SourceTexArraySlice(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRSystem__XRShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRSystem__XRShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRSystem__XRShaderIDs(__XRSystem__XRShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRSystem__XRShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRSystem__XRShaderIDs(__XRSystem__XRShaderIDs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c__DisplayClass26_0
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::XRSystem::<>c__DisplayClass26_0
struct CORDL_TYPE __XRSystem____c__DisplayClass26_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRSystem____c__DisplayClass26_0();

  // Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None }]
  constexpr __XRSystem____c__DisplayClass26_0(::UnityW<::UnityEngine::Camera> camera) noexcept;

  /// @brief Field camera, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> camera;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0, camera) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::XRSystem
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::XRSystem*
class CORDL_TYPE XRSystem : public ::System::Object {
public:
  // Declarations
  using XRShaderIDs = ::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs;

  using __c__DisplayClass26_0 = ::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0;

  /// @brief Field _XRMirrorProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__XRMirrorProfilingSampler, put = setStaticF__XRMirrorProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* _XRMirrorProfilingSampler;

  /// @brief Field displayList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_displayList, put = setStaticF_displayList))::System::Collections::Generic::List_1<Il2CppObject*>* displayList;

  /// @brief Field emptyPass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_emptyPass, put = __cordl_internal_set_emptyPass))::UnityEngine::Rendering::Universal::XRPass* emptyPass;

  /// @brief Field framePasses, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_framePasses, put = __cordl_internal_set_framePasses))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* framePasses;

  /// @brief Field mirrorViewMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorViewMaterial, put = __cordl_internal_set_mirrorViewMaterial))::UnityW<::UnityEngine::Material> mirrorViewMaterial;

  /// @brief Field mirrorViewMaterialProperty, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorViewMaterialProperty, put = __cordl_internal_set_mirrorViewMaterialProperty))::UnityEngine::MaterialPropertyBlock* mirrorViewMaterialProperty;

  /// @brief Field msaaLevel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_msaaLevel, put = setStaticF_msaaLevel)) int32_t msaaLevel;

  /// @brief Field occlusionMeshMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_occlusionMeshMaterial, put = __cordl_internal_set_occlusionMeshMaterial))::UnityW<::UnityEngine::Material> occlusionMeshMaterial;

  /// @brief Field testRenderTexture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_testRenderTexture, put = __cordl_internal_set_testRenderTexture))::UnityW<::UnityEngine::RenderTexture> testRenderTexture;

  /// @brief Method AddPassToFrame, addr 0x288e1c4, size 0xb4, virtual false, abstract: false, final false
  inline void AddPassToFrame(::UnityEngine::Rendering::Universal::XRPass* xrPass);

  /// @brief Method BeginLateLatching, addr 0x2888084, size 0x6c, virtual false, abstract: false, final false
  inline void BeginLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPass* xrPass);

  /// @brief Method CreateLayoutFromXrSdk, addr 0x28909d0, size 0x440, virtual false, abstract: false, final false
  inline void CreateLayoutFromXrSdk(::UnityEngine::Camera* camera, bool singlePassAllowed);

  /// @brief Method Dispose, addr 0x2883824, size 0x68, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method EndLateLatching, addr 0x28880f0, size 0x34, virtual false, abstract: false, final false
  inline void EndLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPass* xrPass);

  /// @brief Method GetDisplaySubsystem, addr 0x2890738, size 0x9c, virtual false, abstract: false, final false
  static inline void GetDisplaySubsystem();

  /// @brief Method GetMSAALevel, addr 0x2890978, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetMSAALevel();

  /// @brief Method GetMaxViews, addr 0x28905c8, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetMaxViews();

  /// @brief Method InitializeXRSystemData, addr 0x28905dc, size 0x15c, virtual false, abstract: false, final false
  inline void InitializeXRSystemData(::UnityEngine::Rendering::Universal::XRSystemData* data);

  static inline ::UnityEngine::Rendering::Universal::XRSystem* New_ctor();

  /// @brief Method OverrideForAutomatedTests, addr 0x2890e10, size 0x4, virtual false, abstract: false, final false
  inline void OverrideForAutomatedTests(::UnityEngine::Camera* camera);

  /// @brief Method RefreshXrSdk, addr 0x2889a00, size 0x260, virtual false, abstract: false, final false
  inline bool RefreshXrSdk();

  /// @brief Method ReleaseFrame, addr 0x2888e30, size 0x15c, virtual false, abstract: false, final false
  inline void ReleaseFrame();

  /// @brief Method RenderMirrorView, addr 0x2888698, size 0x798, virtual false, abstract: false, final false
  inline void RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera);

  /// @brief Method SetupFrame, addr 0x28874d0, size 0x264, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* SetupFrame(::UnityEngine::Camera* camera, bool enableXRRendering);

  /// @brief Method UpdateCameraData, addr 0x28878a4, size 0x574, virtual false, abstract: false, final false
  inline void UpdateCameraData(ByRef<::UnityEngine::Rendering::Universal::CameraData> baseCameraData, ByRef<::UnityEngine::Rendering::Universal::XRPass*> xr);

  /// @brief Method UpdateFromCamera, addr 0x2887e18, size 0x26c, virtual false, abstract: false, final false
  inline void UpdateFromCamera(ByRef<::UnityEngine::Rendering::Universal::XRPass*> xrPass, ::UnityEngine::Rendering::Universal::CameraData cameraData);

  /// @brief Method UpdateMSAALevel, addr 0x288343c, size 0x13c, virtual false, abstract: false, final false
  static inline void UpdateMSAALevel(int32_t level);

  /// @brief Method UpdateRenderScale, addr 0x2883578, size 0xf4, virtual false, abstract: false, final false
  static inline void UpdateRenderScale(float_t renderScale);

  /// @brief Method XRSystemInit, addr 0x28907d4, size 0x1a4, virtual false, abstract: false, final false
  static inline void XRSystemInit();

  /// @brief Method <CreateLayoutFromXrSdk>g__CanUseSinglePass|26_0, addr 0x2890e14, size 0xec, virtual false, abstract: false, final false
  static inline bool _CreateLayoutFromXrSdk_g__CanUseSinglePass_26_0(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass renderPass,
                                                                     ByRef<::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::UnityEngine::Rendering::Universal::XRPass*& __cordl_internal_get_emptyPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::XRPass*> const& __cordl_internal_get_emptyPass() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>*& __cordl_internal_get_framePasses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>*> const& __cordl_internal_get_framePasses() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mirrorViewMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mirrorViewMaterial();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_mirrorViewMaterialProperty();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get_mirrorViewMaterialProperty() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_occlusionMeshMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_occlusionMeshMaterial();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_testRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_testRenderTexture();

  constexpr void __cordl_internal_set_emptyPass(::UnityEngine::Rendering::Universal::XRPass* value);

  constexpr void __cordl_internal_set_framePasses(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* value);

  constexpr void __cordl_internal_set_mirrorViewMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_mirrorViewMaterialProperty(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_occlusionMeshMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_testRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method .ctor, addr 0x288bb24, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF__XRMirrorProfilingSampler();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_displayList();

  static inline int32_t getStaticF_msaaLevel();

  static inline void setStaticF__XRMirrorProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_displayList(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_msaaLevel(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystem(XRSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystem(XRSystem const&) = delete;

  /// @brief Field emptyPass, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRPass* ___emptyPass;

  /// @brief Field framePasses, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRPass*>* ___framePasses;

  /// @brief Field occlusionMeshMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___occlusionMeshMaterial;

  /// @brief Field mirrorViewMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___mirrorViewMaterial;

  /// @brief Field mirrorViewMaterialProperty, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___mirrorViewMaterialProperty;

  /// @brief Field testRenderTexture, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___testRenderTexture;

  /// @brief Field k_XRMirrorTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRMirrorTag{ u"XR Mirror View" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRSystem, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystem, ___emptyPass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystem, ___framePasses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystem, ___occlusionMeshMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystem, ___mirrorViewMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystem, ___mirrorViewMaterialProperty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRSystem, ___testRenderTexture) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRSystem*, "UnityEngine.Rendering.Universal", "XRSystem");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__XRSystem__XRShaderIDs*, "UnityEngine.Rendering.Universal", "XRSystem/XRShaderIDs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__XRSystem____c__DisplayClass26_0, "UnityEngine.Rendering.Universal", "XRSystem/<>c__DisplayClass26_0");
