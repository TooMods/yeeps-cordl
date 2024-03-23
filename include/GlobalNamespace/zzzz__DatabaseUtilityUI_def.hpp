#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DatabaseUtilityUI)
namespace GlobalNamespace {
class DatabaseUtility;
}
namespace GlobalNamespace {
struct __DatabaseUtilityUI___HandleButtonPressed_d__5;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class DatabaseUtilityUI;
}
namespace GlobalNamespace {
struct __DatabaseUtilityUI___HandleButtonPressed_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DatabaseUtilityUI);
MARK_VAL_T(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5);
// Type: ::<HandleButtonPressed>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DatabaseUtilityUI::<HandleButtonPressed>d__5
struct CORDL_TYPE __DatabaseUtilityUI___HandleButtonPressed_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x276c7d0, size 0x2b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x276ca80, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DatabaseUtilityUI___HandleButtonPressed_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::DatabaseUtilityUI>", modifiers: "",
  // def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __DatabaseUtilityUI___HandleButtonPressed_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::UnityW<::GlobalNamespace::DatabaseUtilityUI> __4__this, ::StringW password,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DatabaseUtilityUI> __4__this;

  /// @brief Field password, offset: 0x30, size: 0x8, def value: None
  ::StringW password;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, password) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DatabaseUtilityUI
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DatabaseUtilityUI*
class CORDL_TYPE DatabaseUtilityUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _HandleButtonPressed_d__5 = ::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5;

  /// @brief Field passwordField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_passwordField, put = __cordl_internal_set_passwordField))::UnityW<::UnityEngine::UI::InputField> passwordField;

  /// @brief Field submitButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_submitButton, put = __cordl_internal_set_submitButton))::UnityW<::UnityEngine::UI::Button> submitButton;

  /// @brief Field utility, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_utility, put = __cordl_internal_set_utility))::UnityW<::GlobalNamespace::DatabaseUtility> utility;

  /// @brief Method HandleButtonPressed, addr 0x276c72c, size 0x9c, virtual false, abstract: false, final false
  inline void HandleButtonPressed(::StringW password);

  /// @brief Method LinkToUtility, addr 0x276c708, size 0x8, virtual false, abstract: false, final false
  inline void LinkToUtility(::GlobalNamespace::DatabaseUtility* utility);

  static inline ::GlobalNamespace::DatabaseUtilityUI* New_ctor();

  /// @brief Method OnSubmitButtonPressed, addr 0x276c710, size 0x1c, virtual false, abstract: false, final false
  inline void OnSubmitButtonPressed();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_passwordField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_passwordField();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_submitButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_submitButton();

  constexpr ::UnityW<::GlobalNamespace::DatabaseUtility> const& __cordl_internal_get_utility() const;

  constexpr ::UnityW<::GlobalNamespace::DatabaseUtility>& __cordl_internal_get_utility();

  constexpr void __cordl_internal_set_passwordField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_submitButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_utility(::UnityW<::GlobalNamespace::DatabaseUtility> value);

  /// @brief Method .ctor, addr 0x276c7c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DatabaseUtilityUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DatabaseUtilityUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DatabaseUtilityUI(DatabaseUtilityUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DatabaseUtilityUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DatabaseUtilityUI(DatabaseUtilityUI const&) = delete;

  /// @brief Field passwordField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___passwordField;

  /// @brief Field submitButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___submitButton;

  /// @brief Field utility, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DatabaseUtility> ___utility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DatabaseUtilityUI, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DatabaseUtilityUI, ___passwordField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DatabaseUtilityUI, ___submitButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DatabaseUtilityUI, ___utility) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DatabaseUtilityUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DatabaseUtilityUI*, "", "DatabaseUtilityUI");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DatabaseUtilityUI___HandleButtonPressed_d__5, "", "DatabaseUtilityUI/<HandleButtonPressed>d__5");
