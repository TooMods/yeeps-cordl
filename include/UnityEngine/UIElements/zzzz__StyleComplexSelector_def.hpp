#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleComplexSelector)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct PseudoStates;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
struct __StyleComplexSelector__PseudoStateData;
}
namespace UnityEngine::UIElements {
class __StyleComplexSelector____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class __StyleComplexSelector____c;
}
namespace UnityEngine::UIElements {
struct __StyleComplexSelector__PseudoStateData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleComplexSelector);
MARK_REF_PTR_T(::UnityEngine::UIElements::__StyleComplexSelector____c);
MARK_VAL_T(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData);
// Type: ::PseudoStateData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 21, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::StyleComplexSelector::PseudoStateData
struct CORDL_TYPE __StyleComplexSelector__PseudoStateData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3028f1c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::PseudoStates state, bool negate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleComplexSelector__PseudoStateData();

  // Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None
  // }]
  constexpr __StyleComplexSelector__PseudoStateData(::UnityEngine::UIElements::PseudoStates state, bool negate) noexcept;

  /// @brief Field state, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::PseudoStates state;

  /// @brief Field negate, offset: 0x4, size: 0x1, def value: None
  bool negate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, negate) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::StyleComplexSelector::<>c*
class CORDL_TYPE __StyleComplexSelector____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__StyleComplexSelector____c* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0))::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* __9__20_0;

  static inline ::UnityEngine::UIElements::__StyleComplexSelector____c* New_ctor();

  /// @brief Method <ToString>b__20_0, addr 0x3028f98, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__20_0(::UnityEngine::UIElements::StyleSelector* x);

  /// @brief Method .ctor, addr 0x3028f90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__StyleComplexSelector____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* getStaticF___9__20_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__StyleComplexSelector____c* value);

  static inline void setStaticF___9__20_0(::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleComplexSelector____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StyleComplexSelector____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StyleComplexSelector____c(__StyleComplexSelector____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StyleComplexSelector____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StyleComplexSelector____c(__StyleComplexSelector____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleComplexSelector____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleComplexSelector
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StyleComplexSelector*
class CORDL_TYPE StyleComplexSelector : public ::System::Object {
public:
  // Declarations
  using PseudoStateData = ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData;

  using __c = ::UnityEngine::UIElements::__StyleComplexSelector____c;

  /// @brief Field <rule>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rule_k__BackingField, put = __cordl_internal_set__rule_k__BackingField))::UnityEngine::UIElements::StyleRule* _rule_k__BackingField;

  /// @brief Field m_Selectors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Selectors,
                      put = __cordl_internal_set_m_Selectors))::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> m_Selectors;

  /// @brief Field m_Specificity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Specificity, put = __cordl_internal_set_m_Specificity)) int32_t m_Specificity;

  /// @brief Field nextInTable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nextInTable, put = __cordl_internal_set_nextInTable))::UnityEngine::UIElements::StyleComplexSelector* nextInTable;

  /// @brief Field orderInStyleSheet, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_orderInStyleSheet, put = __cordl_internal_set_orderInStyleSheet)) int32_t orderInStyleSheet;

  __declspec(property(get = get_rule, put = set_rule))::UnityEngine::UIElements::StyleRule* rule;

  /// @brief Field ruleIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_ruleIndex, put = __cordl_internal_set_ruleIndex)) int32_t ruleIndex;

  /// @brief Field s_PseudoStates, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_PseudoStates,
               put = setStaticF_s_PseudoStates))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>* s_PseudoStates;

  __declspec(property(get = get_selectors, put = set_selectors))::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> selectors;

  __declspec(property(get = get_specificity)) int32_t specificity;

  /// @brief Method CachePseudoStateMasks, addr 0x2cd3070, size 0x5d0, virtual false, abstract: false, final false
  inline void CachePseudoStateMasks();

  static inline ::UnityEngine::UIElements::StyleComplexSelector* New_ctor();

  /// @brief Method ToString, addr 0x2cd3640, size 0x170, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::UIElements::StyleRule*& __cordl_internal_get__rule_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleRule*> const& __cordl_internal_get__rule_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> const& __cordl_internal_get_m_Selectors() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>& __cordl_internal_get_m_Selectors();

  constexpr int32_t const& __cordl_internal_get_m_Specificity() const;

  constexpr int32_t& __cordl_internal_get_m_Specificity();

  constexpr ::UnityEngine::UIElements::StyleComplexSelector*& __cordl_internal_get_nextInTable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleComplexSelector*> const& __cordl_internal_get_nextInTable() const;

  constexpr int32_t const& __cordl_internal_get_orderInStyleSheet() const;

  constexpr int32_t& __cordl_internal_get_orderInStyleSheet();

  constexpr int32_t const& __cordl_internal_get_ruleIndex() const;

  constexpr int32_t& __cordl_internal_get_ruleIndex();

  constexpr void __cordl_internal_set__rule_k__BackingField(::UnityEngine::UIElements::StyleRule* value);

  constexpr void __cordl_internal_set_m_Selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> value);

  constexpr void __cordl_internal_set_m_Specificity(int32_t value);

  constexpr void __cordl_internal_set_nextInTable(::UnityEngine::UIElements::StyleComplexSelector* value);

  constexpr void __cordl_internal_set_orderInStyleSheet(int32_t value);

  constexpr void __cordl_internal_set_ruleIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2cd37b0, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>* getStaticF_s_PseudoStates();

  /// @brief Method get_rule, addr 0x2cd3050, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleRule* get_rule();

  /// @brief Method get_selectors, addr 0x2cd3060, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> get_selectors();

  /// @brief Method get_specificity, addr 0x2cd3048, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_specificity();

  static inline void setStaticF_s_PseudoStates(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData>* value);

  /// @brief Method set_rule, addr 0x2cd3058, size 0x8, virtual false, abstract: false, final false
  inline void set_rule(::UnityEngine::UIElements::StyleRule* value);

  /// @brief Method set_selectors, addr 0x2cd3068, size 0x8, virtual false, abstract: false, final false
  inline void set_selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleComplexSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleComplexSelector(StyleComplexSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleComplexSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleComplexSelector(StyleComplexSelector const&) = delete;

  /// @brief Field m_Specificity, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Specificity;

  /// @brief Field <rule>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleRule* ____rule_k__BackingField;

  /// @brief Field m_Selectors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> ___m_Selectors;

  /// @brief Field ruleIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___ruleIndex;

  /// @brief Field nextInTable, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* ___nextInTable;

  /// @brief Field orderInStyleSheet, offset: 0x38, size: 0x4, def value: None
  int32_t ___orderInStyleSheet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleComplexSelector, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_Specificity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ____rule_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___m_Selectors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___ruleIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___nextInTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleComplexSelector, ___orderInStyleSheet) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleComplexSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleComplexSelector*, "UnityEngine.UIElements", "StyleComplexSelector");
NEED_NO_BOX(::UnityEngine::UIElements::__StyleComplexSelector____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleComplexSelector____c*, "UnityEngine.UIElements", "StyleComplexSelector/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleComplexSelector__PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
