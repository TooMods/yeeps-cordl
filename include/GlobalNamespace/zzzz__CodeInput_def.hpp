#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodeInput)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class __CodeInput__OnCompleteCodeUpdated;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CodeInput;
}
namespace GlobalNamespace {
class __CodeInput__OnCompleteCodeUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CodeInput);
MARK_REF_PTR_T(::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated);
// Type: ::OnCompleteCodeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CodeInput::OnCompleteCodeUpdated*
class CORDL_TYPE __CodeInput__OnCompleteCodeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x15464c0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW code, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15464e0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x15464ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW code);

  static inline ::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15463d8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CodeInput__OnCompleteCodeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CodeInput__OnCompleteCodeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CodeInput__OnCompleteCodeUpdated(__CodeInput__OnCompleteCodeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CodeInput__OnCompleteCodeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CodeInput__OnCompleteCodeUpdated(__CodeInput__OnCompleteCodeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CodeInput
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CodeInput*
class CORDL_TYPE CodeInput : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnCompleteCodeUpdated = ::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated;

  /// @brief Field codeDigitTexts, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_codeDigitTexts,
                      put = __cordl_internal_set_codeDigitTexts))::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> codeDigitTexts;

  /// @brief Field codeLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_codeLength, put = __cordl_internal_set_codeLength)) int32_t codeLength;

  /// @brief Field completeCode, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_completeCode, put = __cordl_internal_set_completeCode))::StringW completeCode;

  /// @brief Field curCode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_curCode, put = __cordl_internal_set_curCode))::StringW curCode;

  /// @brief Field keypadButtonContainers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keypadButtonContainers,
                      put = __cordl_internal_set_keypadButtonContainers))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> keypadButtonContainers;

  /// @brief Field keypadButtons, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_keypadButtons,
                      put = __cordl_internal_set_keypadButtons))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SimpleButtonController>>* keypadButtons;

  /// @brief Field onCompleteCodeUpdatedCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onCompleteCodeUpdatedCallbacks,
                      put = __cordl_internal_set_onCompleteCodeUpdatedCallbacks))::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated* onCompleteCodeUpdatedCallbacks;

  /// @brief Field resetButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_resetButton, put = __cordl_internal_set_resetButton))::UnityW<::GlobalNamespace::SimpleButtonController> resetButton;

  /// @brief Method Awake, addr 0x1545ba0, size 0x414, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearCode, addr 0x1545fb4, size 0xc, virtual false, abstract: false, final false
  inline void ClearCode();

  /// @brief Method DisplayCode, addr 0x1545fc0, size 0x328, virtual false, abstract: false, final false
  inline void DisplayCode(::StringW code, bool doCallback);

  static inline ::GlobalNamespace::CodeInput* New_ctor();

  /// @brief Method OnKeypadButtonPressed, addr 0x15462f0, size 0xcc, virtual false, abstract: false, final false
  inline void OnKeypadButtonPressed(::StringW value);

  /// @brief Method OnResetButtonPressed, addr 0x15463bc, size 0xc, virtual false, abstract: false, final false
  inline void OnResetButtonPressed();

  /// @brief Method SetCodeSilent, addr 0x15462e8, size 0x8, virtual false, abstract: false, final false
  inline void SetCodeSilent(::StringW code);

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_codeDigitTexts() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_codeDigitTexts();

  constexpr int32_t const& __cordl_internal_get_codeLength() const;

  constexpr int32_t& __cordl_internal_get_codeLength();

  constexpr ::StringW const& __cordl_internal_get_completeCode() const;

  constexpr ::StringW& __cordl_internal_get_completeCode();

  constexpr ::StringW const& __cordl_internal_get_curCode() const;

  constexpr ::StringW& __cordl_internal_get_curCode();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_keypadButtonContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_keypadButtonContainers();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SimpleButtonController>>*& __cordl_internal_get_keypadButtons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SimpleButtonController>>*> const& __cordl_internal_get_keypadButtons() const;

  constexpr ::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated*& __cordl_internal_get_onCompleteCodeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated*> const& __cordl_internal_get_onCompleteCodeUpdatedCallbacks() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_resetButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_resetButton();

  constexpr void __cordl_internal_set_codeDigitTexts(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value);

  constexpr void __cordl_internal_set_codeLength(int32_t value);

  constexpr void __cordl_internal_set_completeCode(::StringW value);

  constexpr void __cordl_internal_set_curCode(::StringW value);

  constexpr void __cordl_internal_set_keypadButtonContainers(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_keypadButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SimpleButtonController>>* value);

  constexpr void __cordl_internal_set_onCompleteCodeUpdatedCallbacks(::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated* value);

  constexpr void __cordl_internal_set_resetButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0x15463c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeInput(CodeInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeInput(CodeInput const&) = delete;

  /// @brief Field codeLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___codeLength;

  /// @brief Field curCode, offset: 0x20, size: 0x8, def value: None
  ::StringW ___curCode;

  /// @brief Field codeDigitTexts, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> ___codeDigitTexts;

  /// @brief Field keypadButtonContainers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___keypadButtonContainers;

  /// @brief Field keypadButtons, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SimpleButtonController>>* ___keypadButtons;

  /// @brief Field resetButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___resetButton;

  /// @brief Field completeCode, offset: 0x48, size: 0x8, def value: None
  ::StringW ___completeCode;

  /// @brief Field onCompleteCodeUpdatedCallbacks, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated* ___onCompleteCodeUpdatedCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CodeInput, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___codeLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___curCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___codeDigitTexts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___keypadButtonContainers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___keypadButtons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___resetButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___completeCode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeInput, ___onCompleteCodeUpdatedCallbacks) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CodeInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CodeInput*, "", "CodeInput");
NEED_NO_BOX(::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CodeInput__OnCompleteCodeUpdated*, "", "CodeInput/OnCompleteCodeUpdated");
