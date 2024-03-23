#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImaginationPromptManager)
namespace GlobalNamespace {
struct ImaginationPromptTypeData;
}
namespace GlobalNamespace {
class ImaginationPrompt;
}
namespace GlobalNamespace {
class PromptDisplay;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ImaginationPromptManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImaginationPromptManager);
// Type: ::ImaginationPromptManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ImaginationPromptManager*
class CORDL_TYPE ImaginationPromptManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ImaginationPromptManager>> {
public:
  // Declarations
  /// @brief Field display, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_display, put = __cordl_internal_set_display))::UnityW<::GlobalNamespace::PromptDisplay> display;

  /// @brief Field promptTypeDatas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_promptTypeDatas,
                      put = __cordl_internal_set_promptTypeDatas))::ArrayW<::GlobalNamespace::ImaginationPromptTypeData, ::Array<::GlobalNamespace::ImaginationPromptTypeData>*> promptTypeDatas;

  /// @brief Field promptTypeReference, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_promptTypeReference, put = __cordl_internal_set_promptTypeReference))::GlobalNamespace::__ImaginationPrompt__Type promptTypeReference;

  /// @brief Field queuedPrompts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_queuedPrompts, put = __cordl_internal_set_queuedPrompts))::System::Collections::Generic::List_1<::GlobalNamespace::ImaginationPrompt*>* queuedPrompts;

  /// @brief Method ClearPrompt, addr 0x154966c, size 0xd4, virtual false, abstract: false, final false
  inline void ClearPrompt(::GlobalNamespace::ImaginationPrompt* prompt);

  /// @brief Method ColorString, addr 0x1549740, size 0x1c0, virtual false, abstract: false, final false
  static inline ::StringW ColorString(::StringW str, ::UnityEngine::Color color);

  /// @brief Method DisplayPrompt, addr 0x1540d40, size 0x1ec, virtual false, abstract: false, final false
  inline void DisplayPrompt(::GlobalNamespace::ImaginationPrompt* promptData);

  /// @brief Method DisplayPromptIfNone, addr 0x15407fc, size 0xc4, virtual false, abstract: false, final false
  inline void DisplayPromptIfNone(::GlobalNamespace::ImaginationPrompt* promptData);

  /// @brief Method GetPromptTypeData, addr 0x1549408, size 0x38, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ImaginationPromptTypeData GetPromptTypeData(::GlobalNamespace::__ImaginationPrompt__Type type);

  static inline ::GlobalNamespace::ImaginationPromptManager* New_ctor();

  /// @brief Method OnDisplayReadyForNewPrompt, addr 0x15495ac, size 0xc0, virtual false, abstract: false, final false
  inline void OnDisplayReadyForNewPrompt();

  /// @brief Method SetDisplay, addr 0x1549440, size 0x16c, virtual false, abstract: false, final false
  inline void SetDisplay(::GlobalNamespace::PromptDisplay* display);

  constexpr ::UnityW<::GlobalNamespace::PromptDisplay> const& __cordl_internal_get_display() const;

  constexpr ::UnityW<::GlobalNamespace::PromptDisplay>& __cordl_internal_get_display();

  constexpr ::ArrayW<::GlobalNamespace::ImaginationPromptTypeData, ::Array<::GlobalNamespace::ImaginationPromptTypeData>*> const& __cordl_internal_get_promptTypeDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::ImaginationPromptTypeData, ::Array<::GlobalNamespace::ImaginationPromptTypeData>*>& __cordl_internal_get_promptTypeDatas();

  constexpr ::GlobalNamespace::__ImaginationPrompt__Type const& __cordl_internal_get_promptTypeReference() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__Type& __cordl_internal_get_promptTypeReference();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ImaginationPrompt*>*& __cordl_internal_get_queuedPrompts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ImaginationPrompt*>*> const& __cordl_internal_get_queuedPrompts() const;

  constexpr void __cordl_internal_set_display(::UnityW<::GlobalNamespace::PromptDisplay> value);

  constexpr void __cordl_internal_set_promptTypeDatas(::ArrayW<::GlobalNamespace::ImaginationPromptTypeData, ::Array<::GlobalNamespace::ImaginationPromptTypeData>*> value);

  constexpr void __cordl_internal_set_promptTypeReference(::GlobalNamespace::__ImaginationPrompt__Type value);

  constexpr void __cordl_internal_set_queuedPrompts(::System::Collections::Generic::List_1<::GlobalNamespace::ImaginationPrompt*>* value);

  /// @brief Method .ctor, addr 0x1549900, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImaginationPromptManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImaginationPromptManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImaginationPromptManager(ImaginationPromptManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImaginationPromptManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImaginationPromptManager(ImaginationPromptManager const&) = delete;

  /// @brief Field promptTypeReference, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__ImaginationPrompt__Type ___promptTypeReference;

  /// @brief Field promptTypeDatas, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ImaginationPromptTypeData, ::Array<::GlobalNamespace::ImaginationPromptTypeData>*> ___promptTypeDatas;

  /// @brief Field queuedPrompts, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ImaginationPrompt*>* ___queuedPrompts;

  /// @brief Field display, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromptDisplay> ___display;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Imagination Prompts: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImaginationPromptManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptManager, ___promptTypeReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptManager, ___promptTypeDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptManager, ___queuedPrompts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ImaginationPromptManager, ___display) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImaginationPromptManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImaginationPromptManager*, "", "ImaginationPromptManager");
