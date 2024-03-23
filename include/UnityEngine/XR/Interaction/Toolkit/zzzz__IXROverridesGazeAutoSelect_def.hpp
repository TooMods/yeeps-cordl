#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXROverridesGazeAutoSelect)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class IXROverridesGazeAutoSelect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect);
// Type: UnityEngine.XR.Interaction.Toolkit::IXROverridesGazeAutoSelect
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::IXROverridesGazeAutoSelect*
class CORDL_TYPE IXROverridesGazeAutoSelect {
public:
  // Declarations
  __declspec(property(get = get_gazeTimeToSelect)) float_t gazeTimeToSelect;

  __declspec(property(get = get_overrideGazeTimeToSelect)) bool overrideGazeTimeToSelect;

  __declspec(property(get = get_overrideTimeToAutoDeselectGaze)) bool overrideTimeToAutoDeselectGaze;

  __declspec(property(get = get_timeToAutoDeselectGaze)) float_t timeToAutoDeselectGaze;

  /// @brief Method get_gazeTimeToSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_gazeTimeToSelect();

  /// @brief Method get_overrideGazeTimeToSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_overrideGazeTimeToSelect();

  /// @brief Method get_overrideTimeToAutoDeselectGaze, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_overrideTimeToAutoDeselectGaze();

  /// @brief Method get_timeToAutoDeselectGaze, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_timeToAutoDeselectGaze();

  // Ctor Parameters [CppParam { name: "", ty: "IXROverridesGazeAutoSelect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXROverridesGazeAutoSelect(IXROverridesGazeAutoSelect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXROverridesGazeAutoSelect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXROverridesGazeAutoSelect(IXROverridesGazeAutoSelect const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXROverridesGazeAutoSelect*, "UnityEngine.XR.Interaction.Toolkit", "IXROverridesGazeAutoSelect");
