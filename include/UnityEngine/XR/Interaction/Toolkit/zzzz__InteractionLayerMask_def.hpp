#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionLayerMask)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractionLayerMask
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractionLayerMask
struct CORDL_TYPE InteractionLayerMask {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) int32_t value;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*();

  /// @brief Method GetMask, addr 0x2cfe2ec, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t GetMask(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method LayerToName, addr 0x2cfe170, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW LayerToName(int32_t layer);

  /// @brief Method NameToLayer, addr 0x2cfe228, size 0x54, virtual false, abstract: false, final false
  static inline int32_t NameToLayer(::StringW layerName);

  /// @brief Method OnAfterDeserialize, addr 0x2cfe3bc, size 0xc, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2cfe3c8, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method get_value, addr 0x2cfe160, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver();

  /// @brief Method op_Implicit, addr 0x2cedfb8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask op_Implicit___UnityEngine__XR__Interaction__Toolkit__InteractionLayerMask(int32_t intVal);

  /// @brief Method op_Implicit, addr 0x2cfe158, size 0x8, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask mask);

  /// @brief Method set_value, addr 0x2cfe168, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionLayerMask();

  // Ctor Parameters [CppParam { name: "m_Bits", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InteractionLayerMask(uint32_t m_Bits, int32_t m_Mask) noexcept;

  /// @brief Field m_Bits, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Bits;

  /// @brief Field m_Mask, offset: 0x4, size: 0x4, def value: None
  int32_t m_Mask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask, m_Bits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask, m_Mask) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask, "UnityEngine.XR.Interaction.Toolkit", "InteractionLayerMask");
