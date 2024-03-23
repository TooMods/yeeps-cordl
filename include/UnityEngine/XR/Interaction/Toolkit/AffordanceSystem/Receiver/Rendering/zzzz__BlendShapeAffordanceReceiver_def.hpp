#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__FloatAffordanceReceiver_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendShapeAffordanceReceiver)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class BlendShapeAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::BlendShapeAffordanceReceiver
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::BlendShapeAffordanceReceiver*
class CORDL_TYPE BlendShapeAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver {
public:
  // Declarations
  __declspec(property(get = get_blendShapeIndex, put = set_blendShapeIndex)) int32_t blendShapeIndex;

  /// @brief Field m_BlendShapeIndex, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlendShapeIndex, put = __cordl_internal_set_m_BlendShapeIndex)) int32_t m_BlendShapeIndex;

  /// @brief Field m_SkinnedMeshRenderer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SkinnedMeshRenderer, put = __cordl_internal_set_m_SkinnedMeshRenderer))::UnityW<::UnityEngine::SkinnedMeshRenderer> m_SkinnedMeshRenderer;

  __declspec(property(get = get_skinnedMeshRenderer, put = set_skinnedMeshRenderer))::UnityW<::UnityEngine::SkinnedMeshRenderer> skinnedMeshRenderer;

  /// @brief Method GetCurrentValueForCapture, addr 0x2a2fe34, size 0x24, virtual true, abstract: false, final false
  inline float_t GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a2fdf8, size 0x3c, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(float_t newValue);

  /// @brief Method OnEnable, addr 0x2a2fce8, size 0x110, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr int32_t const& __cordl_internal_get_m_BlendShapeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BlendShapeIndex();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_m_SkinnedMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_m_SkinnedMeshRenderer();

  constexpr void __cordl_internal_set_m_BlendShapeIndex(int32_t value);

  constexpr void __cordl_internal_set_m_SkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  /// @brief Method .ctor, addr 0x2a2fe58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_blendShapeIndex, addr 0x2a2fcd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_blendShapeIndex();

  /// @brief Method get_skinnedMeshRenderer, addr 0x2a2fcc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_skinnedMeshRenderer();

  /// @brief Method set_blendShapeIndex, addr 0x2a2fce0, size 0x8, virtual false, abstract: false, final false
  inline void set_blendShapeIndex(int32_t value);

  /// @brief Method set_skinnedMeshRenderer, addr 0x2a2fcd0, size 0x8, virtual false, abstract: false, final false
  inline void set_skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendShapeAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlendShapeAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlendShapeAffordanceReceiver(BlendShapeAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlendShapeAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlendShapeAffordanceReceiver(BlendShapeAffordanceReceiver const&) = delete;

  /// @brief Field m_SkinnedMeshRenderer, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ___m_SkinnedMeshRenderer;

  /// @brief Field m_BlendShapeIndex, offset: 0xa8, size: 0x4, def value: None
  int32_t ___m_BlendShapeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver, ___m_SkinnedMeshRenderer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver, ___m_BlendShapeIndex) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::BlendShapeAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "BlendShapeAffordanceReceiver");
