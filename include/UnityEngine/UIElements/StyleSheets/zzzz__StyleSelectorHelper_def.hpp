#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSelectorHelper)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSelectorHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper);
// Type: UnityEngine.UIElements.StyleSheets::StyleSelectorHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleSelectorHelper*
class CORDL_TYPE StyleSelectorHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FastLookup, addr 0x1f38aa0, size 0x1c4, virtual false, abstract: false, final false
  static inline void FastLookup(::System::Collections::Generic::IDictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector*>* table,
                                ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors,
                                ::UnityEngine::UIElements::StyleMatchingContext* context, ::StringW input, ByRef<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord> record);

  /// @brief Method FindMatches, addr 0x1f38c64, size 0x358, virtual false, abstract: false, final false
  static inline void FindMatches(::UnityEngine::UIElements::StyleMatchingContext* context,
                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchedSelectors, int32_t parentSheetIndex);

  /// @brief Method MatchRightToLeft, addr 0x1f388d8, size 0x1c8, virtual false, abstract: false, final false
  static inline bool MatchRightToLeft(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector,
                                      ::System::Action_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo>* processResult);

  /// @brief Method MatchesSelector, addr 0x1f3861c, size 0x2bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::MatchResultInfo MatchesSelector(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSelector* selector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSelectorHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSelectorHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSelectorHelper(StyleSelectorHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSelectorHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSelectorHelper(StyleSelectorHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSelectorHelper*, "UnityEngine.UIElements.StyleSheets", "StyleSelectorHelper");
