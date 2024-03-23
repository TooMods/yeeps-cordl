#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QualityManager)
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class QualityManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QualityManager);
// Type: ::QualityManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QualityManager*
class CORDL_TYPE QualityManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::QualityManager>> {
public:
  // Declarations
  /// @brief Field foveatedRenderingLevelQuest1, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_foveatedRenderingLevelQuest1,
                      put = __cordl_internal_set_foveatedRenderingLevelQuest1))::GlobalNamespace::__OVRManager__FoveatedRenderingLevel foveatedRenderingLevelQuest1;

  /// @brief Field foveatedRenderingLevelQuest2, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_foveatedRenderingLevelQuest2,
                      put = __cordl_internal_set_foveatedRenderingLevelQuest2))::GlobalNamespace::__OVRManager__FoveatedRenderingLevel foveatedRenderingLevelQuest2;

  /// @brief Field foveatedRenderingLevelQuest3, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_foveatedRenderingLevelQuest3,
                      put = __cordl_internal_set_foveatedRenderingLevelQuest3))::GlobalNamespace::__OVRManager__FoveatedRenderingLevel foveatedRenderingLevelQuest3;

  /// @brief Field urpPipeline, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_urpPipeline, put = __cordl_internal_set_urpPipeline))::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> urpPipeline;

  static inline ::GlobalNamespace::QualityManager* New_ctor();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x1757b58, size 0xc8, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method SetRefreshRate, addr 0x1757c20, size 0x108, virtual false, abstract: false, final false
  static inline void SetRefreshRate(float_t newRefreshRate);

  /// @brief Method Start, addr 0x1757840, size 0x318, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const& __cordl_internal_get_foveatedRenderingLevelQuest1() const;

  constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel& __cordl_internal_get_foveatedRenderingLevelQuest1();

  constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const& __cordl_internal_get_foveatedRenderingLevelQuest2() const;

  constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel& __cordl_internal_get_foveatedRenderingLevelQuest2();

  constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel const& __cordl_internal_get_foveatedRenderingLevelQuest3() const;

  constexpr ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel& __cordl_internal_get_foveatedRenderingLevelQuest3();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> const& __cordl_internal_get_urpPipeline() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>& __cordl_internal_get_urpPipeline();

  constexpr void __cordl_internal_set_foveatedRenderingLevelQuest1(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel value);

  constexpr void __cordl_internal_set_foveatedRenderingLevelQuest2(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel value);

  constexpr void __cordl_internal_set_foveatedRenderingLevelQuest3(::GlobalNamespace::__OVRManager__FoveatedRenderingLevel value);

  constexpr void __cordl_internal_set_urpPipeline(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> value);

  /// @brief Method .ctor, addr 0x1757d28, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QualityManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QualityManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QualityManager(QualityManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QualityManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QualityManager(QualityManager const&) = delete;

  /// @brief Field foveatedRenderingLevelQuest1, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel ___foveatedRenderingLevelQuest1;

  /// @brief Field foveatedRenderingLevelQuest2, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel ___foveatedRenderingLevelQuest2;

  /// @brief Field foveatedRenderingLevelQuest3, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__FoveatedRenderingLevel ___foveatedRenderingLevelQuest3;

  /// @brief Field urpPipeline, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> ___urpPipeline;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Quality: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QualityManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QualityManager, ___foveatedRenderingLevelQuest1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QualityManager, ___foveatedRenderingLevelQuest2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QualityManager, ___foveatedRenderingLevelQuest3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QualityManager, ___urpPipeline) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QualityManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QualityManager*, "", "QualityManager");
