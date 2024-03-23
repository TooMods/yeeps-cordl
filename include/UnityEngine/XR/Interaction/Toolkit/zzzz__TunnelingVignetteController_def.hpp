#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__EaseState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TunnelingVignetteController)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct EaseState;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ITunnelingVignetteProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionVignetteProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class VignetteParameters;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __TunnelingVignetteController__ProviderRecord;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __TunnelingVignetteController__ShaderPropertyLookup;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TunnelingVignetteController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __TunnelingVignetteController__ProviderRecord;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class __TunnelingVignetteController__ShaderPropertyLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup);
// Type: ::ShaderPropertyLookup
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::TunnelingVignetteController::ShaderPropertyLookup*
class CORDL_TYPE __TunnelingVignetteController__ShaderPropertyLookup : public ::System::Object {
public:
  // Declarations
  /// @brief Field apertureSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_apertureSize, put = setStaticF_apertureSize)) int32_t apertureSize;

  /// @brief Field featheringEffect, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_featheringEffect, put = setStaticF_featheringEffect)) int32_t featheringEffect;

  /// @brief Field vignetteColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_vignetteColor, put = setStaticF_vignetteColor)) int32_t vignetteColor;

  /// @brief Field vignetteColorBlend, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_vignetteColorBlend, put = setStaticF_vignetteColorBlend)) int32_t vignetteColorBlend;

  static inline int32_t getStaticF_apertureSize();

  static inline int32_t getStaticF_featheringEffect();

  static inline int32_t getStaticF_vignetteColor();

  static inline int32_t getStaticF_vignetteColorBlend();

  static inline void setStaticF_apertureSize(int32_t value);

  static inline void setStaticF_featheringEffect(int32_t value);

  static inline void setStaticF_vignetteColor(int32_t value);

  static inline void setStaticF_vignetteColorBlend(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TunnelingVignetteController__ShaderPropertyLookup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TunnelingVignetteController__ShaderPropertyLookup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TunnelingVignetteController__ShaderPropertyLookup(__TunnelingVignetteController__ShaderPropertyLookup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TunnelingVignetteController__ShaderPropertyLookup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TunnelingVignetteController__ShaderPropertyLookup(__TunnelingVignetteController__ShaderPropertyLookup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::ProviderRecord
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::TunnelingVignetteController::ProviderRecord*
class CORDL_TYPE __TunnelingVignetteController__ProviderRecord : public ::System::Object {
public:
  // Declarations
  /// @brief Field <dynamicApertureSize>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicApertureSize_k__BackingField, put = __cordl_internal_set__dynamicApertureSize_k__BackingField)) float_t _dynamicApertureSize_k__BackingField;

  /// @brief Field <dynamicEaseOutDelayTime>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField,
                      put = __cordl_internal_set__dynamicEaseOutDelayTime_k__BackingField)) float_t _dynamicEaseOutDelayTime_k__BackingField;

  /// @brief Field <easeInLockEnded>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__easeInLockEnded_k__BackingField, put = __cordl_internal_set__easeInLockEnded_k__BackingField)) bool _easeInLockEnded_k__BackingField;

  /// @brief Field <easeState>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__easeState_k__BackingField,
                      put = __cordl_internal_set__easeState_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::EaseState _easeState_k__BackingField;

  /// @brief Field <provider>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__provider_k__BackingField,
                      put = __cordl_internal_set__provider_k__BackingField))::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* _provider_k__BackingField;

  __declspec(property(get = get_dynamicApertureSize, put = set_dynamicApertureSize)) float_t dynamicApertureSize;

  __declspec(property(get = get_dynamicEaseOutDelayTime, put = set_dynamicEaseOutDelayTime)) float_t dynamicEaseOutDelayTime;

  __declspec(property(get = get_easeInLockEnded, put = set_easeInLockEnded)) bool easeInLockEnded;

  __declspec(property(get = get_easeState, put = set_easeState))::UnityEngine::XR::Interaction::Toolkit::EaseState easeState;

  __declspec(property(get = get_provider))::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider;

  static inline ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord* New_ctor(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider);

  constexpr float_t const& __cordl_internal_get__dynamicApertureSize_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicApertureSize_k__BackingField();

  constexpr float_t const& __cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField();

  constexpr bool const& __cordl_internal_get__easeInLockEnded_k__BackingField() const;

  constexpr bool& __cordl_internal_get__easeInLockEnded_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState const& __cordl_internal_get__easeState_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState& __cordl_internal_get__easeState_k__BackingField();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*& __cordl_internal_get__provider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*> const& __cordl_internal_get__provider_k__BackingField() const;

  constexpr void __cordl_internal_set__dynamicApertureSize_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__dynamicEaseOutDelayTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__easeInLockEnded_k__BackingField(bool value);

  constexpr void __cordl_internal_set__easeState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::EaseState value);

  constexpr void __cordl_internal_set__provider_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* value);

  /// @brief Method .ctor, addr 0x301b97c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider);

  /// @brief Method get_dynamicApertureSize, addr 0x301cd70, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicApertureSize();

  /// @brief Method get_dynamicEaseOutDelayTime, addr 0x301cd94, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicEaseOutDelayTime();

  /// @brief Method get_easeInLockEnded, addr 0x301cd80, size 0x8, virtual false, abstract: false, final false
  inline bool get_easeInLockEnded();

  /// @brief Method get_easeState, addr 0x301cd60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::EaseState get_easeState();

  /// @brief Method get_provider, addr 0x301cd58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* get_provider();

  /// @brief Method set_dynamicApertureSize, addr 0x301cd78, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicApertureSize(float_t value);

  /// @brief Method set_dynamicEaseOutDelayTime, addr 0x301cd9c, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicEaseOutDelayTime(float_t value);

  /// @brief Method set_easeInLockEnded, addr 0x301cd88, size 0xc, virtual false, abstract: false, final false
  inline void set_easeInLockEnded(bool value);

  /// @brief Method set_easeState, addr 0x301cd68, size 0x8, virtual false, abstract: false, final false
  inline void set_easeState(::UnityEngine::XR::Interaction::Toolkit::EaseState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TunnelingVignetteController__ProviderRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TunnelingVignetteController__ProviderRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TunnelingVignetteController__ProviderRecord(__TunnelingVignetteController__ProviderRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TunnelingVignetteController__ProviderRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TunnelingVignetteController__ProviderRecord(__TunnelingVignetteController__ProviderRecord const&) = delete;

  /// @brief Field <provider>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* ____provider_k__BackingField;

  /// @brief Field <easeState>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::EaseState ____easeState_k__BackingField;

  /// @brief Field <dynamicApertureSize>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____dynamicApertureSize_k__BackingField;

  /// @brief Field <easeInLockEnded>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____easeInLockEnded_k__BackingField;

  /// @brief Field <dynamicEaseOutDelayTime>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____dynamicEaseOutDelayTime_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord, ____provider_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord, ____easeState_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord, ____dynamicApertureSize_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord, ____easeInLockEnded_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord, ____dynamicEaseOutDelayTime_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::TunnelingVignetteController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TunnelingVignetteController*
class CORDL_TYPE TunnelingVignetteController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ProviderRecord = ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord;

  using ShaderPropertyLookup = ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup;

  __declspec(property(get = get_currentParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* currentParameters;

  __declspec(property(get = get_defaultParameters, put = set_defaultParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* defaultParameters;

  __declspec(property(get = get_locomotionVignetteProviders,
                      put = set_locomotionVignetteProviders))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* locomotionVignetteProviders;

  /// @brief Field m_CurrentParameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentParameters, put = __cordl_internal_set_m_CurrentParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* m_CurrentParameters;

  /// @brief Field m_DefaultParameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultParameters, put = __cordl_internal_set_m_DefaultParameters))::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* m_DefaultParameters;

  /// @brief Field m_LocomotionVignetteProviders, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocomotionVignetteProviders, put = __cordl_internal_set_m_LocomotionVignetteProviders))::System::Collections::Generic::List_1<
      ::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* m_LocomotionVignetteProviders;

  /// @brief Field m_MeshFilter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshFilter, put = __cordl_internal_set_m_MeshFilter))::UnityW<::UnityEngine::MeshFilter> m_MeshFilter;

  /// @brief Field m_MeshRender, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshRender, put = __cordl_internal_set_m_MeshRender))::UnityW<::UnityEngine::MeshRenderer> m_MeshRender;

  /// @brief Field m_ProviderRecords, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ProviderRecords,
      put = __cordl_internal_set_m_ProviderRecords))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>* m_ProviderRecords;

  /// @brief Field m_SharedMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedMaterial, put = __cordl_internal_set_m_SharedMaterial))::UnityW<::UnityEngine::Material> m_SharedMaterial;

  /// @brief Field m_VignettePropertyBlock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VignettePropertyBlock, put = __cordl_internal_set_m_VignettePropertyBlock))::UnityEngine::MaterialPropertyBlock* m_VignettePropertyBlock;

  /// @brief Method Awake, addr 0x301bf2c, size 0x80, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method BeginTunnelingVignette, addr 0x301b744, size 0x238, virtual false, abstract: false, final false
  inline void BeginTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider);

  /// @brief Method EndTunnelingVignette, addr 0x301b9ac, size 0x320, virtual false, abstract: false, final false
  inline void EndTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider);

  static inline ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController* New_ctor();

  /// @brief Method PreviewInEditor, addr 0x301bccc, size 0x5c, virtual false, abstract: false, final false
  inline void PreviewInEditor(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* previewParameters);

  /// @brief Method Reset, addr 0x301bfac, size 0x90, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method TrySetUpMaterial, addr 0x301c77c, size 0x3dc, virtual false, abstract: false, final false
  inline bool TrySetUpMaterial();

  /// @brief Method Update, addr 0x301c03c, size 0x740, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateTunnelingVignette, addr 0x301bd28, size 0x204, virtual false, abstract: false, final false
  inline void UpdateTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* parameters);

  constexpr ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*& __cordl_internal_get_m_CurrentParameters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*> const& __cordl_internal_get_m_CurrentParameters() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*& __cordl_internal_get_m_DefaultParameters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*> const& __cordl_internal_get_m_DefaultParameters() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*& __cordl_internal_get_m_LocomotionVignetteProviders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*> const&
  __cordl_internal_get_m_LocomotionVignetteProviders() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_m_MeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_m_MeshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_MeshRender() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_MeshRender();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>*& __cordl_internal_get_m_ProviderRecords();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>*> const&
  __cordl_internal_get_m_ProviderRecords() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SharedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SharedMaterial();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_VignettePropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get_m_VignettePropertyBlock() const;

  constexpr void __cordl_internal_set_m_CurrentParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);

  constexpr void __cordl_internal_set_m_DefaultParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);

  constexpr void __cordl_internal_set_m_LocomotionVignetteProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* value);

  constexpr void __cordl_internal_set_m_MeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set_m_MeshRender(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_m_ProviderRecords(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>* value);

  constexpr void __cordl_internal_set_m_SharedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_VignettePropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  /// @brief Method .ctor, addr 0x301cb58, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentParameters, addr 0x301b72c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* get_currentParameters();

  /// @brief Method get_defaultParameters, addr 0x301b71c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* get_defaultParameters();

  /// @brief Method get_locomotionVignetteProviders, addr 0x301b734, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* get_locomotionVignetteProviders();

  /// @brief Method set_defaultParameters, addr 0x301b724, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value);

  /// @brief Method set_locomotionVignetteProviders, addr 0x301b73c, size 0x8, virtual false, abstract: false, final false
  inline void set_locomotionVignetteProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TunnelingVignetteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TunnelingVignetteController(TunnelingVignetteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TunnelingVignetteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TunnelingVignetteController(TunnelingVignetteController const&) = delete;

  /// @brief Field m_DefaultParameters, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* ___m_DefaultParameters;

  /// @brief Field m_CurrentParameters, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* ___m_CurrentParameters;

  /// @brief Field m_LocomotionVignetteProviders, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* ___m_LocomotionVignetteProviders;

  /// @brief Field m_ProviderRecords, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>* ___m_ProviderRecords;

  /// @brief Field m_MeshRender, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___m_MeshRender;

  /// @brief Field m_MeshFilter, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ___m_MeshFilter;

  /// @brief Field m_SharedMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SharedMaterial;

  /// @brief Field m_VignettePropertyBlock, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_VignettePropertyBlock;

  /// @brief Field k_DefaultShader offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultShader{ u"VR/TunnelingVignette" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_DefaultParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_CurrentParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_LocomotionVignetteProviders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_ProviderRecords) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_MeshRender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_MeshFilter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_SharedMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController, ___m_VignettePropertyBlock) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*, "UnityEngine.XR.Interaction.Toolkit", "TunnelingVignetteController");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*, "UnityEngine.XR.Interaction.Toolkit", "TunnelingVignetteController/ProviderRecord");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*, "UnityEngine.XR.Interaction.Toolkit",
                       "TunnelingVignetteController/ShaderPropertyLookup");
