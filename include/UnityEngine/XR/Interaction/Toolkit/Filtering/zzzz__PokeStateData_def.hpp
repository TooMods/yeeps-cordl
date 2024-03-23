#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PokeStateData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeStateData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::PokeStateData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::PokeStateData
struct CORDL_TYPE PokeStateData {
public:
  // Declarations
  __declspec(property(get = get_axisAlignedPokeInteractionPoint, put = set_axisAlignedPokeInteractionPoint))::UnityEngine::Vector3 axisAlignedPokeInteractionPoint;

  __declspec(property(get = get_interactionStrength, put = set_interactionStrength)) float_t interactionStrength;

  __declspec(property(get = get_meetsRequirements, put = set_meetsRequirements)) bool meetsRequirements;

  __declspec(property(get = get_pokeInteractionPoint, put = set_pokeInteractionPoint))::UnityEngine::Vector3 pokeInteractionPoint;

  __declspec(property(get = get_target, put = set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*();

  /// @brief Method Equals, addr 0x2feea30, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2fee904, size 0x12c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData other);

  /// @brief Method GetHashCode, addr 0x2feeac0, size 0x15c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_axisAlignedPokeInteractionPoint, addr 0x2fee8cc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_axisAlignedPokeInteractionPoint();

  /// @brief Method get_interactionStrength, addr 0x2fee8e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_interactionStrength();

  /// @brief Method get_meetsRequirements, addr 0x2fee8a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_meetsRequirements();

  /// @brief Method get_pokeInteractionPoint, addr 0x2fee8b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pokeInteractionPoint();

  /// @brief Method get_target, addr 0x2fee8f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_target();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* i___System__IEquatable_1___UnityEngine__XR__Interaction__Toolkit__Filtering__PokeStateData_();

  /// @brief Method set_axisAlignedPokeInteractionPoint, addr 0x2fee8d8, size 0xc, virtual false, abstract: false, final false
  inline void set_axisAlignedPokeInteractionPoint(::UnityEngine::Vector3 value);

  /// @brief Method set_interactionStrength, addr 0x2fee8ec, size 0x8, virtual false, abstract: false, final false
  inline void set_interactionStrength(float_t value);

  /// @brief Method set_meetsRequirements, addr 0x2fee8a8, size 0xc, virtual false, abstract: false, final false
  inline void set_meetsRequirements(bool value);

  /// @brief Method set_pokeInteractionPoint, addr 0x2fee8c0, size 0xc, virtual false, abstract: false, final false
  inline void set_pokeInteractionPoint(::UnityEngine::Vector3 value);

  /// @brief Method set_target, addr 0x2fee8fc, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::Transform* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PokeStateData();

  // Ctor Parameters [CppParam { name: "_meetsRequirements_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_pokeInteractionPoint_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_axisAlignedPokeInteractionPoint_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "_interactionStrength_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_target_k__BackingField", ty: "::UnityW<::UnityEngine::Transform>",
  // modifiers: "", def_value: None }]
  constexpr PokeStateData(bool _meetsRequirements_k__BackingField, ::UnityEngine::Vector3 _pokeInteractionPoint_k__BackingField,
                          ::UnityEngine::Vector3 _axisAlignedPokeInteractionPoint_k__BackingField, float_t _interactionStrength_k__BackingField,
                          ::UnityW<::UnityEngine::Transform> _target_k__BackingField) noexcept;

  /// @brief Field <meetsRequirements>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _meetsRequirements_k__BackingField;

  /// @brief Field <pokeInteractionPoint>k__BackingField, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 _pokeInteractionPoint_k__BackingField;

  /// @brief Field <axisAlignedPokeInteractionPoint>k__BackingField, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 _axisAlignedPokeInteractionPoint_k__BackingField;

  /// @brief Field <interactionStrength>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _interactionStrength_k__BackingField;

  /// @brief Field <target>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _target_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, _meetsRequirements_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, _pokeInteractionPoint_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, _axisAlignedPokeInteractionPoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, _interactionStrength_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, _target_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeStateData");
