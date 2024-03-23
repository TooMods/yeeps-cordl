#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerIndirectFloatField)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerIndirectFloatField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField);
// Type: UnityEngine.Rendering.UI::DebugUIHandlerIndirectFloatField
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.UI::DebugUIHandlerIndirectFloatField*
class CORDL_TYPE DebugUIHandlerIndirectFloatField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field decimalsGetter, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_decimalsGetter, put = __cordl_internal_set_decimalsGetter))::System::Func_1<float_t>* decimalsGetter;

  /// @brief Field getter, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_getter, put = __cordl_internal_set_getter))::System::Func_1<float_t>* getter;

  /// @brief Field incStepGetter, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_incStepGetter, put = __cordl_internal_set_incStepGetter))::System::Func_1<float_t>* incStepGetter;

  /// @brief Field incStepMultGetter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_incStepMultGetter, put = __cordl_internal_set_incStepMultGetter))::System::Func_1<float_t>* incStepMultGetter;

  /// @brief Field nameLabel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel))::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field setter, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_setter, put = __cordl_internal_set_setter))::System::Action_1<float_t>* setter;

  /// @brief Field valueLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_valueLabel, put = __cordl_internal_set_valueLabel))::UnityW<::UnityEngine::UI::Text> valueLabel;

  /// @brief Method ChangeValue, addr 0x1d96718, size 0xb8, virtual false, abstract: false, final false
  inline void ChangeValue(bool fast, float_t multiplier);

  /// @brief Method Init, addr 0x1d94200, size 0x4, virtual false, abstract: false, final false
  inline void Init();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* New_ctor();

  /// @brief Method OnDecrement, addr 0x1d967d0, size 0xc, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x1d966bc, size 0x50, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x1d9670c, size 0xc, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x1d96664, size 0x58, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method UpdateValueLabel, addr 0x1d96550, size 0x114, virtual false, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_decimalsGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& __cordl_internal_get_decimalsGetter() const;

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_getter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& __cordl_internal_get_getter() const;

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_incStepGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& __cordl_internal_get_incStepGetter() const;

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_incStepMultGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& __cordl_internal_get_incStepMultGetter() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_setter();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_setter() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_valueLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_valueLabel();

  constexpr void __cordl_internal_set_decimalsGetter(::System::Func_1<float_t>* value);

  constexpr void __cordl_internal_set_getter(::System::Func_1<float_t>* value);

  constexpr void __cordl_internal_set_incStepGetter(::System::Func_1<float_t>* value);

  constexpr void __cordl_internal_set_incStepMultGetter(::System::Func_1<float_t>* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_setter(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x1d967dc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerIndirectFloatField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerIndirectFloatField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerIndirectFloatField(DebugUIHandlerIndirectFloatField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerIndirectFloatField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerIndirectFloatField(DebugUIHandlerIndirectFloatField const&) = delete;

  /// @brief Field nameLabel, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___valueLabel;

  /// @brief Field getter, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___getter;

  /// @brief Field setter, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___setter;

  /// @brief Field incStepGetter, offset: 0x78, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___incStepGetter;

  /// @brief Field incStepMultGetter, offset: 0x80, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___incStepMultGetter;

  /// @brief Field decimalsGetter, offset: 0x88, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___decimalsGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___nameLabel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___valueLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___getter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___setter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___incStepGetter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___incStepMultGetter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField, ___decimalsGetter) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*, "UnityEngine.Rendering.UI", "DebugUIHandlerIndirectFloatField");
